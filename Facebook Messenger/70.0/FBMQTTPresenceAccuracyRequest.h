/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:43 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBMQTTPresenceAccuracyRequest : NSObject <TBase, NSCoding> {

	NSString* __thrift_caller;
	char __thrift_caller_set;

}

@property (nonatomic,retain) NSString * caller; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(id)initWithCaller:(id)arg1 ;
-(char)callerIsSet;
-(void)unsetCaller;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(void)setCaller:(NSString *)arg1 ;
-(void)write:(id)arg1 ;
-(NSString *)caller;
@end

