#include <xtd/strings>

#include <bitset>
#include <iostream>
#include <vector>
#include <codecvt>

using namespace std;
using namespace std::string_literals;
using namespace xtd;
using namespace xtd::string_literals;

// The main entry point for the application.
int main() {
  cout << "Local::classic :" << endl;
  cout << "Name is [" << std::locale::classic().name() << "]" << endl;
  cout << endl;
  
  cout << "Local (startup) :" << endl;
  cout << "Name is [" << std::locale().name() << "]" << endl;
  cout << endl;
  
  cout << "Numeric punctuation (startup) : " << endl;
  cout << "Decimal point is [" << std::use_facet<std::numpunct<char>>(std::locale()).decimal_point() << "]" << endl;
  cout << "Grouping is [" << std::use_facet<std::numpunct<char>>(std::locale()).grouping() << "]" << endl;
  cout << "Thousands separator is [" << std::use_facet<std::numpunct<char>>(std::locale()).thousands_sep() << "]" << endl;
  cout << endl;
  
  cout << "Money punctuation (startup) : " << endl;
  cout << "Currency symbol is [" << std::use_facet<std::moneypunct<char>>(std::locale()).curr_symbol() << "]" << endl;
  cout << "Decimal point is [" << std::use_facet<std::moneypunct<char>>(std::locale()).decimal_point() << "]" << endl;
  cout << "Fraction digits (precision) is [" << std::use_facet<std::moneypunct<char>>(std::locale()).frac_digits() << "]" << endl;
  cout << "Grouping is [" << std::use_facet<std::moneypunct<char>>(std::locale()).grouping() << "]" << endl;
  cout << "negative sign is [" << std::use_facet<std::moneypunct<char>>(std::locale()).negative_sign() << "]" << endl;
  cout << "positive sign is [" << std::use_facet<std::moneypunct<char>>(std::locale()).positive_sign() << "]" << endl;
  cout << "thousands separator is [" << std::use_facet<std::moneypunct<char>>(std::locale()).thousands_sep() << "]" << endl;
  cout << endl;

  cout << "Set local::global to \"en_US.UTF-8\" :" << endl;
  std::locale::global(std::locale("en_US.UTF-8"));
  
  cout << "Local :" << endl;
  cout << "Name is [" << std::locale().name() << "]" << endl;
  cout << endl;

  cout << "Numeric punctuation : " << endl;
  cout << "Decimal point is [" << std::use_facet<std::numpunct<char>>(std::locale()).decimal_point() << "]" << endl;
  cout << "Grouping is [" << std::use_facet<std::numpunct<char>>(std::locale()).grouping() << "]" << endl;
  cout << "Thousands separator is [" << std::use_facet<std::numpunct<char>>(std::locale()).thousands_sep() << "]" << endl;
  cout << endl;

  cout << "Money punctuation : " << endl;
  cout << "Currency symbol is [" << std::use_facet<std::moneypunct<char>>(std::locale()).curr_symbol() << "]" << endl;
  cout << "Decimal point is [" << std::use_facet<std::moneypunct<char>>(std::locale()).decimal_point() << "]" << endl;
  cout << "Fraction digits (precision) is [" << std::use_facet<std::moneypunct<char>>(std::locale()).frac_digits() << "]" << endl;
  cout << "Grouping is [" << std::use_facet<std::moneypunct<char>>(std::locale()).grouping() << "]" << endl;
  cout << "negative sign is [" << std::use_facet<std::moneypunct<char>>(std::locale()).negative_sign() << "]" << endl;
  cout << "positive sign is [" << std::use_facet<std::moneypunct<char>>(std::locale()).positive_sign() << "]" << endl;
  cout << "thousands separator is [" << std::use_facet<std::moneypunct<char>>(std::locale()).thousands_sep() << "]" << endl;
  cout << endl;
  
  static std::vector<std::string> locals = {"en_NZ", "nl_NL.UTF-8", "pt_BR.UTF-8", "fr_CH.ISO8859-15", "eu_ES.ISO8859-15", "en_US.US-ASCII", "af_ZA", "bg_BG", "cs_CZ.UTF-8", "fi_FI", "zh_CN.UTF-8", "eu_ES", "sk_SK.ISO8859-2", "nl_BE", "fr_BE", "sk_SK", "en_US.UTF-8", "en_NZ.ISO8859-1", "de_CH", "sk_SK.UTF-8", "de_DE.UTF-8", "am_ET.UTF-8", "zh_HK", "be_BY.UTF-8", "uk_UA", "pt_PT.ISO8859-1", "en_AU.US-ASCII", "kk_KZ.PT154", "en_US", "nl_BE.ISO8859-15", "de_AT.ISO8859-1", "hr_HR.ISO8859-2", "fr_FR.ISO8859-1", "af_ZA.UTF-8", "am_ET", "fi_FI.ISO8859-1", "ro_RO.UTF-8", "af_ZA.ISO8859-15", "en_NZ.UTF-8", "fi_FI.UTF-8", "hr_HR.UTF-8", "da_DK.UTF-8", "ca_ES.ISO8859-1", "en_AU.ISO8859-15", "ro_RO.ISO8859-2", "de_AT.UTF-8", "pt_PT.ISO8859-15", "sv_SE", "fr_CA.ISO8859-1", "fr_BE.ISO8859-1", "en_US.ISO8859-15", "it_CH.ISO8859-1", "en_NZ.ISO8859-15", "en_AU.UTF-8", "de_AT.ISO8859-15", "af_ZA.ISO8859-1", "hu_HU.UTF-8", "et_EE.UTF-8", "he_IL.UTF-8", "uk_UA.KOI8-U", "be_BY", "kk_KZ", "hu_HU.ISO8859-2", "it_CH", "pt_BR", "ko_KR", "it_IT", "fr_BE.UTF-8", "ru_RU.ISO8859-5", "zh_TW", "zh_CN.GB2312", "no_NO.ISO8859-15", "de_DE.ISO8859-15", "en_CA", "fr_CH.UTF-8", "sl_SI.UTF-8", "uk_UA.ISO8859-5", "pt_PT", "hr_HR", "cs_CZ", "fr_CH", "he_IL", "zh_CN.GBK", "zh_CN.GB18030", "fr_CA", "pl_PL.UTF-8", "ja_JP.SJIS", "sr_YU.ISO8859-5", "be_BY.CP1251", "sr_YU.ISO8859-2", "sv_SE.UTF-8", "sr_YU.UTF-8", "de_CH.UTF-8", "sl_SI", "pt_PT.UTF-8", "ro_RO", "en_NZ.US-ASCII", "ja_JP", "zh_CN", "fr_CH.ISO8859-1", "ko_KR.eucKR", "be_BY.ISO8859-5", "nl_NL.ISO8859-15", "en_GB.ISO8859-1", "en_CA.US-ASCII", "is_IS.ISO8859-1", "ru_RU.CP866", "nl_NL", "fr_CA.ISO8859-15", "sv_SE.ISO8859-15", "hy_AM", "en_CA.ISO8859-15", "en_US.ISO8859-1", "zh_TW.Big5", "ca_ES.UTF-8", "ru_RU.CP1251", "en_GB.UTF-8", "en_GB.US-ASCII", "ru_RU.UTF-8", "eu_ES.UTF-8", "es_ES.ISO8859-1", "hu_HU", "el_GR.ISO8859-7", "en_AU", "it_CH.UTF-8", "en_GB", "sl_SI.ISO8859-2", "ru_RU.KOI8-R", "nl_BE.UTF-8", "et_EE", "fr_FR.ISO8859-15", "cs_CZ.ISO8859-2", "lt_LT.UTF-8", "pl_PL.ISO8859-2", "fr_BE.ISO8859-15", "is_IS.UTF-8", "tr_TR.ISO8859-9", "da_DK.ISO8859-1", "lt_LT.ISO8859-4", "lt_LT.ISO8859-13", "zh_TW.UTF-8", "bg_BG.CP1251", "el_GR.UTF-8", "be_BY.CP1131", "da_DK.ISO8859-15", "is_IS.ISO8859-15", "no_NO.ISO8859-1", "nl_NL.ISO8859-1", "nl_BE.ISO8859-1", "sv_SE.ISO8859-1", "pt_BR.ISO8859-1", "zh_CN.eucCN", "it_IT.UTF-8", "en_CA.UTF-8", "uk_UA.UTF-8", "de_CH.ISO8859-15", "de_DE.ISO8859-1", "ca_ES", "sr_YU", "hy_AM.ARMSCII-8", "ru_RU", "zh_HK.UTF-8", "eu_ES.ISO8859-1", "is_IS", "bg_BG.UTF-8", "ja_JP.UTF-8", "it_CH.ISO8859-15", "fr_FR.UTF-8", "ko_KR.UTF-8", "et_EE.ISO8859-15", "kk_KZ.UTF-8", "ca_ES.ISO8859-15", "en_IE.UTF-8", "es_ES", "de_CH.ISO8859-1", "en_CA.ISO8859-1", "es_ES.ISO8859-15", "en_AU.ISO8859-1", "el_GR", "da_DK", "no_NO", "it_IT.ISO8859-1", "en_IE", "zh_HK.Big5HKSCS", "hi_IN.ISCII-DEV", "ja_JP.eucJP", "it_IT.ISO8859-15", "pl_PL", "ko_KR.CP949", "fr_CA.UTF-8", "fi_FI.ISO8859-15", "en_GB.ISO8859-15", "fr_FR", "hy_AM.UTF-8", "no_NO.UTF-8", "es_ES.UTF-8", "de_AT", "tr_TR.UTF-8", "de_DE", "lt_LT", "tr_TR", "C", "POSIX"};
  cout << "Locals : " << endl;
  std::sort(locals.begin(), locals.end());
  cout << strings::join(", ", locals) << endl;
  cout << endl;
}

// This code produces the following output:
//
// Hello, World!
