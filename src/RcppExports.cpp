// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// createSequenceMatrix
NumericMatrix createSequenceMatrix(CharacterVector stringchar, bool toRowProbs, bool sanitize);
RcppExport SEXP markovchain_createSequenceMatrix(SEXP stringcharSEXP, SEXP toRowProbsSEXP, SEXP sanitizeSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< CharacterVector >::type stringchar(stringcharSEXP);
    Rcpp::traits::input_parameter< bool >::type toRowProbs(toRowProbsSEXP);
    Rcpp::traits::input_parameter< bool >::type sanitize(sanitizeSEXP);
    __result = Rcpp::wrap(createSequenceMatrix(stringchar, toRowProbs, sanitize));
    return __result;
END_RCPP
}
// markovchainFit
List markovchainFit(SEXP data, String method, bool byrow, int nboot, double laplacian, String name, bool parallel, double confidencelevel, NumericMatrix hyperparam, CharacterVector newData);
RcppExport SEXP markovchain_markovchainFit(SEXP dataSEXP, SEXP methodSEXP, SEXP byrowSEXP, SEXP nbootSEXP, SEXP laplacianSEXP, SEXP nameSEXP, SEXP parallelSEXP, SEXP confidencelevelSEXP, SEXP hyperparamSEXP, SEXP newDataSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< SEXP >::type data(dataSEXP);
    Rcpp::traits::input_parameter< String >::type method(methodSEXP);
    Rcpp::traits::input_parameter< bool >::type byrow(byrowSEXP);
    Rcpp::traits::input_parameter< int >::type nboot(nbootSEXP);
    Rcpp::traits::input_parameter< double >::type laplacian(laplacianSEXP);
    Rcpp::traits::input_parameter< String >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type parallel(parallelSEXP);
    Rcpp::traits::input_parameter< double >::type confidencelevel(confidencelevelSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type hyperparam(hyperparamSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type newData(newDataSEXP);
    __result = Rcpp::wrap(markovchainFit(data, method, byrow, nboot, laplacian, name, parallel, confidencelevel, hyperparam, newData));
    return __result;
END_RCPP
}
