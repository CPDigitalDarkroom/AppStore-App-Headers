/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBWebrtcAutomationConnectionUpdateNotification : NSObject <TBase, NSCoding> {

	NSString* __localCandidateIPAddress;
	NSString* __localCandidatePort;
	NSString* __remoteCandidateIPAddress;
	NSString* __remoteCandidatePort;
	NSString* __localIPAddress;
	char __localCandidateIPAddress_isset;
	char __localCandidatePort_isset;
	char __remoteCandidateIPAddress_isset;
	char __remoteCandidatePort_isset;
	char __localIPAddress_isset;

}

@property (setter=setLocalCandidateIPAddress:,getter=localCandidateIPAddress,nonatomic,retain) NSString * localCandidateIPAddress; 
@property (setter=setLocalCandidatePort:,getter=localCandidatePort,nonatomic,retain) NSString * localCandidatePort; 
@property (setter=setRemoteCandidateIPAddress:,getter=remoteCandidateIPAddress,nonatomic,retain) NSString * remoteCandidateIPAddress; 
@property (setter=setRemoteCandidatePort:,getter=remoteCandidatePort,nonatomic,retain) NSString * remoteCandidatePort; 
@property (setter=setLocalIPAddress:,getter=localIPAddress,nonatomic,retain) NSString * localIPAddress; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setLocalCandidateIPAddress:(NSString *)arg1 ;
-(void)setLocalCandidatePort:(NSString *)arg1 ;
-(void)setRemoteCandidateIPAddress:(NSString *)arg1 ;
-(void)setRemoteCandidatePort:(NSString *)arg1 ;
-(void)setLocalIPAddress:(NSString *)arg1 ;
-(id)initWithLocalCandidateIPAddress:(id)arg1 localCandidatePort:(id)arg2 remoteCandidateIPAddress:(id)arg3 remoteCandidatePort:(id)arg4 localIPAddress:(id)arg5 ;
-(NSString *)localCandidateIPAddress;
-(char)localCandidateIPAddressIsSet;
-(void)unsetLocalCandidateIPAddress;
-(NSString *)localCandidatePort;
-(char)localCandidatePortIsSet;
-(void)unsetLocalCandidatePort;
-(NSString *)remoteCandidateIPAddress;
-(char)remoteCandidateIPAddressIsSet;
-(void)unsetRemoteCandidateIPAddress;
-(NSString *)remoteCandidatePort;
-(char)remoteCandidatePortIsSet;
-(void)unsetRemoteCandidatePort;
-(NSString *)localIPAddress;
-(char)localIPAddressIsSet;
-(void)unsetLocalIPAddress;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
@end

