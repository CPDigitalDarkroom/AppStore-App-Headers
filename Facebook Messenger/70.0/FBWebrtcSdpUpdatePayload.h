/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcSdp, NSString;

@interface FBWebrtcSdpUpdatePayload : NSObject <TBase, NSCoding> {

	FBWebrtcSdp* __sdp;
	long long __ackMessageId;
	char __sdp_isset;
	char __ackMessageId_isset;

}

@property (setter=setSdp:,getter=sdp,nonatomic,retain) FBWebrtcSdp * sdp; 
@property (assign,setter=setAckMessageId:,getter=ackMessageId,nonatomic) long long ackMessageId; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setAckMessageId:(long long)arg1 ;
-(long long)ackMessageId;
-(char)ackMessageIdIsSet;
-(void)unsetAckMessageId;
-(char)sdpIsSet;
-(void)unsetSdp;
-(id)initWithSdp:(id)arg1 ackMessageId:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(void)validate;
-(void)write:(id)arg1 ;
-(FBWebrtcSdp *)sdp;
-(void)setSdp:(FBWebrtcSdp *)arg1 ;
@end

