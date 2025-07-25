.onUnload <- function(libpath) {
   # unload the package library
   library.dynam.unload("boostmath", libpath)
}
