/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBPaymentsFormTextInputHandler.h>

@interface MNPaymentsRiskFlowNumberTextInputHandler : FBPaymentsFormTextInputHandler {

	int _numberType;

}
-(id)textInputStateForText:(id)arg1 truncateExceededCharacters:(char)arg2 ;
-(id)processChangeFromState:(id)arg1 toState:(id)arg2 textInputEvent:(int)arg3 ;
-(id)initWithNumberType:(int)arg1 ;
-(id)effectiveCharacterSet;
-(id)errorDescriptionForError:(id)arg1 ;
-(unsigned)expectedLengthOfEffectiveCharactersWithInputedEffectiveText:(id)arg1 ;
-(int)keyboardType;
@end

