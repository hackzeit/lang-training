package main

import (
        "code.google.com/p/plotinum/plot"
        "code.google.com/p/plotinum/plotter"
        "code.google.com/p/plotinum/plotutil"
        "code.google.com/p/plotinum/vg"
        "math/rand"
)

func main() {
        // Get some data to display in our plot.
        rand.Seed(int64(0))
        n := 10
        uniform := make(plotter.Values, n)
        normal := make(plotter.Values, n)
        expon := make(plotter.Values, n)
        for i := 0; i < n; i++ {
                uniform[i] = rand.Float64()
                normal[i] = rand.NormFloat64()
                expon[i] = rand.ExpFloat64()
        }

        // Create the plot and set its title and axis label.
        p, err := plot.New()
        if err != nil {
                panic(err)
        }
        p.Title.Text = "Box plots"
        p.Y.Label.Text = "Values"

        // Make boxes for our data and add them to the plot.
        err = plotutil.AddBoxPlots(p, vg.Points(20),
                "Uniform\nDistribution", uniform,
                "Normal\nDistribution", normal,
                "Exponential\nDistribution", expon)
        if err != nil {
                panic(err)
        }

        if err := p.Save(3, 4, "box_plot_vertical2.png"); err != nil {
                panic(err)
        }
}
