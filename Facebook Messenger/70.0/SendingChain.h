/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:23:05 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/Chain.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class ECKeyPair, ChainKey, NSString;

@interface SendingChain : NSObject <Chain, NSSecureCoding> {

	ECKeyPair* _senderRatchetKeyPair;
	ChainKey* _chainKey;

}

@property (nonatomic,retain) ChainKey * chainKey;                   //@synthesize chainKey=_chainKey - In the implementation block
@property (retain) ECKeyPair * senderRatchetKeyPair;                //@synthesize senderRatchetKeyPair=_senderRatchetKeyPair - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(void)setChainKey:(ChainKey *)arg1 ;
-(ChainKey *)chainKey;
-(void)setSenderRatchetKeyPair:(ECKeyPair *)arg1 ;
-(ECKeyPair *)senderRatchetKeyPair;
-(id)initWithChainKey:(id)arg1 senderRatchetKeyPair:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
@end

