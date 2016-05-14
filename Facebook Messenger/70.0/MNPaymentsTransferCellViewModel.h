/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:27 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDate, NSURL, MNPaymentsTransferStatusModelForTransactionHistoryCell;

@interface MNPaymentsTransferCellViewModel : FBValueObject <NSCopying> {

	NSString* _userFBID;
	NSString* _amountText;
	NSDate* _timeToDisplay;
	NSString* _transferId;
	NSURL* _customImageURL;
	NSString* _customDisplayNameText;
	int _maskType;
	int _placeholderType;
	MNPaymentsTransferStatusModelForTransactionHistoryCell* _statusModel;

}

@property (nonatomic,copy,readonly) NSString * userFBID;                                                               //@synthesize userFBID=_userFBID - In the implementation block
@property (nonatomic,copy,readonly) NSString * amountText;                                                             //@synthesize amountText=_amountText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timeToDisplay;                                                            //@synthesize timeToDisplay=_timeToDisplay - In the implementation block
@property (nonatomic,copy,readonly) NSString * transferId;                                                             //@synthesize transferId=_transferId - In the implementation block
@property (nonatomic,copy,readonly) NSURL * customImageURL;                                                            //@synthesize customImageURL=_customImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * customDisplayNameText;                                                  //@synthesize customDisplayNameText=_customDisplayNameText - In the implementation block
@property (nonatomic,readonly) int maskType;                                                                           //@synthesize maskType=_maskType - In the implementation block
@property (nonatomic,readonly) int placeholderType;                                                                    //@synthesize placeholderType=_placeholderType - In the implementation block
@property (nonatomic,copy,readonly) MNPaymentsTransferStatusModelForTransactionHistoryCell * statusModel;              //@synthesize statusModel=_statusModel - In the implementation block
-(NSString *)userFBID;
-(MNPaymentsTransferStatusModelForTransactionHistoryCell *)statusModel;
-(NSString *)transferId;
-(id)initWithUserFBID:(id)arg1 amountText:(id)arg2 timeToDisplay:(id)arg3 transferId:(id)arg4 customImageURL:(id)arg5 customDisplayNameText:(id)arg6 maskType:(int)arg7 placeholderType:(int)arg8 statusModel:(id)arg9 ;
-(NSDate *)timeToDisplay;
-(NSURL *)customImageURL;
-(NSString *)customDisplayNameText;
-(int)maskType;
-(NSString *)amountText;
-(int)placeholderType;
@end

