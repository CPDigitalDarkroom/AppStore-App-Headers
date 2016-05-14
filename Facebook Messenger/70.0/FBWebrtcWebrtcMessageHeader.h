/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:02 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class FBWebrtcWebrtcMessageEndpoint, NSString;

@interface FBWebrtcWebrtcMessageHeader : NSObject <TBase, NSCoding> {

	int __protocolVersion;
	long long __messageId;
	long long __callId;
	long long __sender;
	long long __receiver;
	long long __capabilities;
	int __payloadType;
	unsigned char __retryCount;
	char __pranswerSupported;
	int __ackMessageType;
	FBWebrtcWebrtcMessageEndpoint* __source;
	FBWebrtcWebrtcMessageEndpoint* __destination;
	char __protocolVersion_isset;
	char __messageId_isset;
	char __callId_isset;
	char __sender_isset;
	char __receiver_isset;
	char __capabilities_isset;
	char __payloadType_isset;
	char __retryCount_isset;
	char __pranswerSupported_isset;
	char __ackMessageType_isset;
	char __source_isset;
	char __destination_isset;

}

@property (assign,setter=setProtocolVersion:,getter=protocolVersion,nonatomic) int protocolVersion; 
@property (assign,setter=setMessageId:,getter=messageId,nonatomic) long long messageId; 
@property (assign,setter=setCallId:,getter=callId,nonatomic) long long callId; 
@property (assign,setter=setSender:,getter=sender,nonatomic) long long sender; 
@property (assign,setter=setReceiver:,getter=receiver,nonatomic) long long receiver; 
@property (assign,setter=setCapabilities:,getter=capabilities,nonatomic) long long capabilities; 
@property (assign,setter=setPayloadType:,getter=payloadType,nonatomic) int payloadType; 
@property (assign,setter=setRetryCount:,getter=retryCount,nonatomic) unsigned char retryCount; 
@property (assign,setter=setPranswerSupported:,getter=pranswerSupported,nonatomic) char pranswerSupported; 
@property (assign,setter=setAckMessageType:,getter=ackMessageType,nonatomic) int ackMessageType; 
@property (setter=setSource:,getter=source,nonatomic,retain) FBWebrtcWebrtcMessageEndpoint * source; 
@property (setter=setDestination:,getter=destination,nonatomic,retain) FBWebrtcWebrtcMessageEndpoint * destination; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setPranswerSupported:(char)arg1 ;
-(void)setAckMessageType:(int)arg1 ;
-(id)initWithProtocolVersion:(int)arg1 messageId:(long long)arg2 callId:(long long)arg3 sender:(long long)arg4 receiver:(long long)arg5 capabilities:(long long)arg6 payloadType:(int)arg7 retryCount:(unsigned char)arg8 pranswerSupported:(char)arg9 ackMessageType:(int)arg10 source:(id)arg11 destination:(id)arg12 ;
-(char)protocolVersionIsSet;
-(void)unsetProtocolVersion;
-(char)messageIdIsSet;
-(void)unsetMessageId;
-(char)callIdIsSet;
-(void)unsetCallId;
-(char)senderIsSet;
-(void)unsetSender;
-(char)receiverIsSet;
-(void)unsetReceiver;
-(char)capabilitiesIsSet;
-(void)unsetCapabilities;
-(char)payloadTypeIsSet;
-(void)unsetPayloadType;
-(char)retryCountIsSet;
-(void)unsetRetryCount;
-(char)pranswerSupported;
-(char)pranswerSupportedIsSet;
-(void)unsetPranswerSupported;
-(int)ackMessageType;
-(char)ackMessageTypeIsSet;
-(void)unsetAckMessageType;
-(char)sourceIsSet;
-(void)unsetSource;
-(char)destinationIsSet;
-(void)unsetDestination;
-(void)setPayloadType:(int)arg1 ;
-(void)setReceiver:(long long)arg1 ;
-(long long)receiver;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(NSString *)description;
-(long long)sender;
-(FBWebrtcWebrtcMessageEndpoint *)source;
-(void)setSource:(FBWebrtcWebrtcMessageEndpoint *)arg1 ;
-(FBWebrtcWebrtcMessageEndpoint *)destination;
-(void)setDestination:(FBWebrtcWebrtcMessageEndpoint *)arg1 ;
-(void)validate;
-(void)setSender:(long long)arg1 ;
-(int)payloadType;
-(void)write:(id)arg1 ;
-(void)setRetryCount:(unsigned char)arg1 ;
-(unsigned char)retryCount;
-(void)setProtocolVersion:(int)arg1 ;
-(int)protocolVersion;
-(long long)messageId;
-(void)setMessageId:(long long)arg1 ;
-(void)setCapabilities:(long long)arg1 ;
-(long long)capabilities;
-(void)setCallId:(long long)arg1 ;
-(long long)callId;
@end

