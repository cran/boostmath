#' Riemann Zeta Function
#'
#' Computes the Riemann zeta function \eqn{(\zeta(s))} for argument \eqn{(z)}.
#'
#' @param z Real number input
#' @return The value of the Riemann zeta function \eqn{(\zeta(z))}.
#' @export
#' @examples
#' # Riemann Zeta Function
#' zeta(2)  # Should return pi^2 / 6
zeta <- function(z) {
  .Call(`zeta_`, z)
}
