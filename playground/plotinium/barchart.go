package main

import (
        "code.google.com/p/plotinum/plot"
        "code.google.com/p/plotinum/plotter"
        "code.google.com/p/plotinum/plotutil"
        "code.google.com/p/plotinum/vg"
)

func main() {
        groupA := plotter.Values{20, 35, 30, 35, 27}
        groupB := plotter.Values{25, 32, 34, 20, 25}
        groupC := plotter.Values{12, 28, 15, 21, 8}

        p, err := plot.New()
        if err != nil {
                panic(err)
        }
        p.Title.Text = "Bar chart"
        p.Y.Label.Text = "Heights"

        w := vg.Points(20)

        barsA, err := plotter.NewBarChart(groupA, w)
        if err != nil {
                panic(err)
        }
        barsA.LineStyle.Width = vg.Length(0)
        barsA.Color = plotutil.Color(0)
        barsA.Offset = -w

        barsB, err := plotter.NewBarChart(groupB, w)
        if err != nil {
                panic(err)
        }
        barsB.LineStyle.Width = vg.Length(0)
        barsB.Color = plotutil.Color(1)

        barsC, err := plotter.NewBarChart(groupC, w)
        if err != nil {
                panic(err)
        }
        barsC.LineStyle.Width = vg.Length(0)
        barsC.Color = plotutil.Color(2)
        barsC.Offset = w

        p.Add(barsA, barsB, barsC)
        p.Legend.Add("Group A", barsA)
        p.Legend.Add("Group B", barsB)
        p.Legend.Add("Group C", barsC)
        p.Legend.Top = true
        p.NominalX("One", "Two", "Three", "Four", "Five")

        if err := p.Save(5, 3, "barchart.png"); err != nil {
                panic(err)
        }
}
