package main

import (
        "code.google.com/p/plotinum/plot"
        "code.google.com/p/plotinum/plotter"
        "code.google.com/p/plotinum/plotutil"
        "math/rand"
)

func main() {
        rand.Seed(int64(0))

        p, err := plot.New()
        if err != nil {
                panic(err)
        }

        p.Title.Text = "Relabeling tick marks example"
        p.X.Label.Text = "X"
        p.Y.Label.Text = "Y"
        // Use a custom tick marker function that computes the default
        // tick marks and re-labels the major ticks with commas.
        p.Y.Tick.Marker = commaTicks

        err = plotutil.AddLinePoints(p,
                "First", randomPoints(15),
                "Second", randomPoints(15),
                "Third", randomPoints(15))
        if err != nil {
                panic(err)
        }

        // Save the plot to a PNG file.
        if err := p.Save(4, 4, "points_commas.png"); err != nil {
                panic(err)
        }
}

// RandomPoints returns some random x, y points.
func randomPoints(n int) plotter.XYs {
        pts := make(plotter.XYs, n)
        for i := range pts {
                if i == 0 {
                        pts[i].X = rand.Float64()
                } else {
                        pts[i].X = pts[i-1].X + rand.Float64()
                }
                pts[i].Y = (pts[i].X + 10*rand.Float64()) * 1000
        }
        return pts
}

// CommaTicks computes the default tick marks, but inserts commas
// into the labels for the major tick marks.
func commaTicks(min, max float64) []plot.Tick {
        tks := plot.DefaultTicks(min, max)
        for i, t := range tks {
                if t.Label == "" { // Skip minor ticks, they are fine.
                        continue
                }
                tks[i].Label = addCommas(t.Label)
        }
        return tks
}

// AddCommas adds commas after every 3 characters from right to left.
// NOTE: This function is a quick hack, it doesn't work with decimal
// points, and may have a bunch of other problems. 
func addCommas(s string) string {
        rev := ""
        n := 0
        for i := len(s) - 1; i >= 0; i-- {
                rev += string(s[i])
                n++
                if n%3 == 0 {
                        rev += ","
                }
        }
        s = ""
        for i := len(rev) - 1; i >= 0; i-- {
                s += string(rev[i])
        }
        return s
}
