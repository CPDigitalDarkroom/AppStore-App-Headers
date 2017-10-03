/********************************************************************************
 * T1PhoneNumberFormatter helpers: the functionality exposed in the following
 * convenience methods is used from T1PhoneNumberFormatter, an Objective C
 * wrapper for libPhoneNumber features and subclass of NSFormatter.
 */

var phone_util = i18n.phonenumbers.PhoneNumberUtil.getInstance();

/**
 * Convenience method to use AsYouTypeFormatter's formatting for phone_number
 * in the country indicated by country_code. This is called from the _formatNumber
 * method in T1PhoneNumberFormatter.
 */
function formatInternationalNumber(country_code, phone_number) {
  try {
    var formatter = new i18n.phonenumbers.AsYouTypeFormatter(country_code);
    var output = phone_number;
    for (var i = 0; i < phone_number.length; i++) {
      output = formatter.inputDigit(phone_number[i]);
    }
    return output.toString();
  } catch (e) {
    return phone_number;
  }
};

/**
 * Convenience method to call PhoneNumberUtil's formatNumberForMobileDialing()
 * country_code is the international prefix or country calling code
 * national_number is the phone number without the prefix
 * region is the ISO-3166-1 alpha-2 country code, e.g. "US", "SE", etc. for
 * the user.
 */
function formatNumberForMobileDialing(country_code, national_number, region) {
    try {
        var phone_number = new i18n.phonenumbers.PhoneNumber();
        phone_number.setCountryCode(country_code);
        phone_number.setNationalNumber(national_number);
        return phone_util.formatNumberForMobileDialing(phone_number, region, true);
    } catch (e) {
        return national_number;
    }
};

/**
 * Convenience method to use PhoneNumberUtil's isValidNumber() for phone_number
 * in the country indicated by country_code. This is called from the _validateNumber
 * method in T1PhoneNumberFormatter.
 */
function validateInternationalNumber(country_code, phone_number) {
  try {
    var parsed_phone_number = phone_util.parse(phone_number, country_code);
    return phone_util.isValidNumber(parsed_phone_number);
  } catch (e) {
    return false;
  }
};
