## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup, include=FALSE-----------------------------------------------------
library(boostmath)

## -----------------------------------------------------------------------------
# Example of finding a root using bisection method
f <- function(x) x^2 - 2
bisect(f, lower = 0, upper = 2)
# Example of finding a root using bracket and solve method
f <- function(x) x^2 - 2
bracket_and_solve_root(f, guess = 1, factor = 0.1, rising = TRUE)
# Example of finding a root using TOMS 748 algorithm
f <- function(x) x^2 - 2
toms748_solve(f, lower = 0, upper = 2)

## -----------------------------------------------------------------------------
# Example of finding a root using Newton-Raphson method
f <- function(x) c(x^2 - 2, 2 * x)
newton_raphson_iterate(f, guess = 1, lower = 0, upper = 2)
# Example of finding a root using Halley's method
f <- function(x) c(x^2 - 2, 2 * x, 2)
halley_iterate(f, guess = 1, lower = 0, upper = 2)
# Example of finding a root using Schroder's method
f <- function(x) c(x^2 - 2, 2 * x, 2)
schroder_iterate(f, guess = 1, lower = 0, upper = 2)

## -----------------------------------------------------------------------------
# Example of finding quadratic roots
quadratic_roots(1, -3, 2)

## -----------------------------------------------------------------------------
# Example of finding cubic roots
cubic_roots(1, -6, 11, -6)
# Example of finding cubic root residual
cubic_root_residual(1, -6, 11, -6, 1)
# Example of finding cubic root condition number
cubic_root_condition_number(1, -6, 11, -6, 1)

## -----------------------------------------------------------------------------
# Example of finding quartic roots
quartic_roots(1, -10, 35, -50, 24)

## -----------------------------------------------------------------------------
# Example of finding a minimum using Brent's method
f <- function(x) (x - 2)^2 + 1
brent_find_minima(f, lower = 0, upper = 4)

