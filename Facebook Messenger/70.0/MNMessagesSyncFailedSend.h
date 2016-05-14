/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:14 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface MNMessagesSyncFailedSend : NSObject <TBase, NSCoding> {

	long long __offlineThreadingId;
	NSString* __errorMessage;
	char __isRetryable;
	int __errorCode;
	char __offlineThreadingId_isset;
	char __errorMessage_isset;
	char __isRetryable_isset;
	char __errorCode_isset;

}

@property (assign,setter=setOfflineThreadingId:,getter=offlineThreadingId,nonatomic) long long offlineThreadingId; 
@property (setter=setErrorMessage:,getter=errorMessage,nonatomic,retain) NSString * errorMessage; 
@property (assign,setter=setIsRetryable:,getter=isRetryable,nonatomic) char isRetryable; 
@property (assign,setter=setErrorCode:,getter=errorCode,nonatomic) int errorCode; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)offlineThreadingId;
-(void)read:(id)arg1 ;
-(void)setOfflineThreadingId:(long long)arg1 ;
-(char)offlineThreadingIdIsSet;
-(void)unsetOfflineThreadingId;
-(char)errorCodeIsSet;
-(void)unsetErrorCode;
-(void)setIsRetryable:(char)arg1 ;
-(char)isRetryable;
-(char)isRetryableIsSet;
-(void)unsetIsRetryable;
-(char)errorMessageIsSet;
-(void)unsetErrorMessage;
-(id)initWithOfflineThreadingId:(long long)arg1 errorMessage:(id)arg2 isRetryable:(char)arg3 errorCode:(int)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(void)setErrorMessage:(NSString *)arg1 ;
-(NSString *)errorMessage;
-(int)errorCode;
-(void)setErrorCode:(int)arg1 ;
@end

