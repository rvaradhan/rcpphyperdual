// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// addHL
Rcpp::NumericVector addHL(Rcpp::NumericVector x, Rcpp::NumericVector y, bool verbose);
RcppExport SEXP RcppHyperDual_addHL(SEXP xSEXP, SEXP ySEXP, SEXP verboseSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericVector >::type y(ySEXP);
    Rcpp::traits::input_parameter< bool >::type verbose(verboseSEXP);
    __result = Rcpp::wrap(addHL(x, y, verbose));
    return __result;
END_RCPP
}
