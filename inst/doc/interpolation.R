## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup, include=FALSE-----------------------------------------------------
library(boostmath)

## -----------------------------------------------------------------------------
y <- c(1, 2, 0, 2, 1)
t0 <- 0
h <- 1
spline_obj <- cardinal_cubic_b_spline(y, t0, h)
x <- 0.5
spline_obj$interpolate(x)
spline_obj$prime(x)
spline_obj$double_prime(x)

## -----------------------------------------------------------------------------
x <- c(0, 1, 2, 3)
y <- c(1, 2, 0, 2)
order <- 3
interpolator <- barycentric_rational(x, y, order)
xi <- 1.5
interpolator$interpolate(xi)
interpolator$prime(xi)

## -----------------------------------------------------------------------------
control_points <- list(c(0, 0, 0), c(1, 2, 0), c(2, 0, 0), c(3, 3, 0))
interpolator <- bezier_polynomial(control_points)
xi <- 0.8
interpolator$interpolate(xi)
interpolator$prime(xi)
new_control_point <- c(1.5, 1, 0)
interpolator$edit_control_point(new_control_point, 2)

## -----------------------------------------------------------------------------
x <- seq(0, 1, length.out = 10)
interpolator <- bilinear_uniform(x, rows = 2, cols = 5)
xi <- 0.5
yi <- 0.5
interpolator$interpolate(xi, yi)

## -----------------------------------------------------------------------------
y <- c(0, 1, 0, 1)
t0 <- 0
h <- 1
interpolator <- cardinal_quadratic_b_spline(y, t0, h)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)

## -----------------------------------------------------------------------------
y <- seq(0, 1, length.out = 20)
t0 <- 0
h <- 1
interpolator <- cardinal_quintic_b_spline(y, t0, h)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$double_prime(xi)

## -----------------------------------------------------------------------------
control_points <- list(c(0, 0, 0), c(1, 1, 0), c(2, 0, 0), c(3, 1, 0))
interpolator <- catmull_rom(control_points)
xi <- 1.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$max_parameter()
interpolator$parameter_at_point(2)

## -----------------------------------------------------------------------------
x <- c(0, 1, 2)
y <- c(0, 1, 0)
dydx <- c(1, 0, -1)
interpolator <- cubic_hermite(x, y, dydx)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$push_back(3, 0, 1)
interpolator$domain()

## -----------------------------------------------------------------------------
y <- c(0, 1, 0)
dydx <- c(1, 0, -1)
interpolator <- cardinal_cubic_hermite(y, dydx, 0, 1)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$domain()

## -----------------------------------------------------------------------------
x <- c(0, 1, 2, 3)
y <- c(0, 1, 0, 1)
interpolator <- makima(x, y)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$push_back(4, 1)

## -----------------------------------------------------------------------------
x <- c(0, 1, 2, 3)
y <- c(0, 1, 0, 1)
interpolator <- pchip(x, y)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$push_back(4, 1)

## -----------------------------------------------------------------------------
x <- c(0, 1, 2)
y <- c(0, 1, 0)
dydx <- c(1, 0, -1)
d2ydx2 <- c(0, -1, 0)
interpolator <- quintic_hermite(x, y, dydx, d2ydx2)
xi <- 0.5
interpolator$interpolate(xi)
interpolator$prime(xi)
interpolator$double_prime(xi)
interpolator$push_back(3, 0, 1, 0)
interpolator$domain()

