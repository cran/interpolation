// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "interpolation_types.h"
#include <Rcpp.h>

using namespace Rcpp;

#ifdef RCPP_USE_GLOBAL_ROSTREAM
Rcpp::Rostream<true>&  Rcpp::Rcout = Rcpp::Rcpp_cout_get();
Rcpp::Rostream<false>& Rcpp::Rcerr = Rcpp::Rcpp_cerr_get();
#endif

// delaunayXYZ_linear
Rcpp::XPtr<std::pair<Delaunay2, Coord_field>> delaunayXYZ_linear(Rcpp::NumericMatrix XYZ);
RcppExport SEXP _interpolation_delaunayXYZ_linear(SEXP XYZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYZ(XYZSEXP);
    rcpp_result_gen = Rcpp::wrap(delaunayXYZ_linear(XYZ));
    return rcpp_result_gen;
END_RCPP
}
// delaunayXYZZ_linear
Rcpp::XPtr<std::pair<Delaunay2, Vector2_field>> delaunayXYZZ_linear(Rcpp::NumericMatrix XYZZ);
RcppExport SEXP _interpolation_delaunayXYZZ_linear(SEXP XYZZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYZZ(XYZZSEXP);
    rcpp_result_gen = Rcpp::wrap(delaunayXYZZ_linear(XYZZ));
    return rcpp_result_gen;
END_RCPP
}
// delaunayXYZZZ_linear
Rcpp::XPtr<std::pair<Delaunay2, Vector3_field>> delaunayXYZZZ_linear(Rcpp::NumericMatrix XYZZZ);
RcppExport SEXP _interpolation_delaunayXYZZZ_linear(SEXP XYZZZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYZZZ(XYZZZSEXP);
    rcpp_result_gen = Rcpp::wrap(delaunayXYZZZ_linear(XYZZZ));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_linear
Rcpp::NumericVector interpolate_linear(Rcpp::XPtr<std::pair<Delaunay2, Coord_field>> xptr, Rcpp::NumericMatrix XYnew);
RcppExport SEXP _interpolation_interpolate_linear(SEXP xptrSEXP, SEXP XYnewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::pair<Delaunay2, Coord_field>> >::type xptr(xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYnew(XYnewSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_linear(xptr, XYnew));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_linear2
Rcpp::NumericMatrix interpolate_linear2(Rcpp::XPtr<std::pair<Delaunay2, Vector2_field>> xptr, Rcpp::NumericMatrix XYnew);
RcppExport SEXP _interpolation_interpolate_linear2(SEXP xptrSEXP, SEXP XYnewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::pair<Delaunay2, Vector2_field>> >::type xptr(xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYnew(XYnewSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_linear2(xptr, XYnew));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_linear3
Rcpp::NumericMatrix interpolate_linear3(Rcpp::XPtr<std::pair<Delaunay2, Vector3_field>> xptr, Rcpp::NumericMatrix XYnew);
RcppExport SEXP _interpolation_interpolate_linear3(SEXP xptrSEXP, SEXP XYnewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::pair<Delaunay2, Vector3_field>> >::type xptr(xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYnew(XYnewSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_linear3(xptr, XYnew));
    return rcpp_result_gen;
END_RCPP
}
// delaunayXYZ_sibson
Rcpp::XPtr<std::pair<Delaunay2, std::pair<Coord_field, Vector2_field>>> delaunayXYZ_sibson(Rcpp::NumericMatrix XYZ);
RcppExport SEXP _interpolation_delaunayXYZ_sibson(SEXP XYZSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYZ(XYZSEXP);
    rcpp_result_gen = Rcpp::wrap(delaunayXYZ_sibson(XYZ));
    return rcpp_result_gen;
END_RCPP
}
// interpolate_sibson
Rcpp::NumericVector interpolate_sibson(Rcpp::XPtr<std::pair<Delaunay2, std::pair<Coord_field, Vector2_field>>> xptr, Rcpp::NumericMatrix XYnew);
RcppExport SEXP _interpolation_interpolate_sibson(SEXP xptrSEXP, SEXP XYnewSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<std::pair<Delaunay2, std::pair<Coord_field, Vector2_field>>> >::type xptr(xptrSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type XYnew(XYnewSEXP);
    rcpp_result_gen = Rcpp::wrap(interpolate_sibson(xptr, XYnew));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_interpolation_delaunayXYZ_linear", (DL_FUNC) &_interpolation_delaunayXYZ_linear, 1},
    {"_interpolation_delaunayXYZZ_linear", (DL_FUNC) &_interpolation_delaunayXYZZ_linear, 1},
    {"_interpolation_delaunayXYZZZ_linear", (DL_FUNC) &_interpolation_delaunayXYZZZ_linear, 1},
    {"_interpolation_interpolate_linear", (DL_FUNC) &_interpolation_interpolate_linear, 2},
    {"_interpolation_interpolate_linear2", (DL_FUNC) &_interpolation_interpolate_linear2, 2},
    {"_interpolation_interpolate_linear3", (DL_FUNC) &_interpolation_interpolate_linear3, 2},
    {"_interpolation_delaunayXYZ_sibson", (DL_FUNC) &_interpolation_delaunayXYZ_sibson, 1},
    {"_interpolation_interpolate_sibson", (DL_FUNC) &_interpolation_interpolate_sibson, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_interpolation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}