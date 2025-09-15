## ----include = FALSE----------------------------------------------------------
knitr::opts_chunk$set(
  collapse = TRUE,
  comment = "#>"
)

## ----setup, include=FALSE-----------------------------------------------------
library(boostmath)

## -----------------------------------------------------------------------------
# Daubechies Scaling Filter of order 4
daubechies_scaling_filter(4)
# Daubechies Wavelet Filter of order 4
daubechies_wavelet_filter(4)

