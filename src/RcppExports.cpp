// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// fastqReader_Open
bool fastqReader_Open(const std::string& f);
RcppExport SEXP RSeqLib_fastqReader_Open(SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(fastqReader_Open(f));
    return rcpp_result_gen;
END_RCPP
}
// createBamVector
void createBamVector();
RcppExport SEXP RSeqLib_createBamVector() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    createBamVector();
    return R_NilValue;
END_RCPP
}
// createBamRecord
void createBamRecord();
RcppExport SEXP RSeqLib_createBamRecord() {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    createBamRecord();
    return R_NilValue;
END_RCPP
}
// alignSequence
void alignSequence(const std::string& seq, const std::string& name, bool hardclip, double keep_sec_with_frac_of_primary_score, int max_secondary);
RcppExport SEXP RSeqLib_alignSequence(SEXP seqSEXP, SEXP nameSEXP, SEXP hardclipSEXP, SEXP keep_sec_with_frac_of_primary_scoreSEXP, SEXP max_secondarySEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::string& >::type seq(seqSEXP);
    Rcpp::traits::input_parameter< const std::string& >::type name(nameSEXP);
    Rcpp::traits::input_parameter< bool >::type hardclip(hardclipSEXP);
    Rcpp::traits::input_parameter< double >::type keep_sec_with_frac_of_primary_score(keep_sec_with_frac_of_primary_scoreSEXP);
    Rcpp::traits::input_parameter< int >::type max_secondary(max_secondarySEXP);
    alignSequence(seq, name, hardclip, keep_sec_with_frac_of_primary_score, max_secondary);
    return R_NilValue;
END_RCPP
}
// load_index_from_sequence
RcppExport SEXP load_index_from_sequence(std::string& querySeq, std::string& seqname);
RcppExport SEXP RSeqLib_load_index_from_sequence(SEXP querySeqSEXP, SEXP seqnameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type querySeq(querySeqSEXP);
    Rcpp::traits::input_parameter< std::string& >::type seqname(seqnameSEXP);
    rcpp_result_gen = Rcpp::wrap(load_index_from_sequence(querySeq, seqname));
    return rcpp_result_gen;
END_RCPP
}
// load_index_from_fasta
std::string load_index_from_fasta(std::string& fasta);
RcppExport SEXP RSeqLib_load_index_from_fasta(SEXP fastaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::string& >::type fasta(fastaSEXP);
    rcpp_result_gen = Rcpp::wrap(load_index_from_fasta(fasta));
    return rcpp_result_gen;
END_RCPP
}
// run_bwa
std::string run_bwa(Rcpp::XPtr<int> bwap, std::string& querySeq);
RcppExport SEXP RSeqLib_run_bwa(SEXP bwapSEXP, SEXP querySeqSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<int> >::type bwap(bwapSEXP);
    Rcpp::traits::input_parameter< std::string& >::type querySeq(querySeqSEXP);
    rcpp_result_gen = Rcpp::wrap(run_bwa(bwap, querySeq));
    return rcpp_result_gen;
END_RCPP
}