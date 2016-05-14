/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:49 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, MNRideServiceSurgeInfo;

@interface MNRideServiceRequestResponse : NSObject <NSCopying> {

	unsigned _subtype;
	NSString* _success_successMessage;
	MNRideServiceSurgeInfo* _surge_surgeInfo;
	NSString* _error_errorMessage;
	NSString* _updatePayment_errorMessage;

}
+(id)errorWithErrorMessage:(id)arg1 ;
+(id)successWithSuccessMessage:(id)arg1 ;
+(id)surgeWithSurgeInfo:(id)arg1 ;
+(id)updatePaymentWithErrorMessage:(id)arg1 ;
-(void)matchSuccess:(/*^block*/id)arg1 surge:(/*^block*/id)arg2 error:(/*^block*/id)arg3 updatePayment:(/*^block*/id)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

