/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:45 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <libobjc.A.dylib/NSCoding.h>

@class TFNTwitterScribeThriftClientHeader, TFNTwitterScribeThriftServerHeader, NSString;

@interface TFNTwitterScribeThriftCommonHeader : NSObject <TBase, NSCoding> {

	char _clientHeaderIsSet;
	char _serverHeaderIsSet;
	TFNTwitterScribeThriftClientHeader* _clientHeader;
	TFNTwitterScribeThriftServerHeader* _serverHeader;

}

@property (nonatomic,retain) TFNTwitterScribeThriftClientHeader * clientHeader;              //@synthesize clientHeader=_clientHeader - In the implementation block
@property (nonatomic,readonly) char clientHeaderIsSet;                                       //@synthesize clientHeaderIsSet=_clientHeaderIsSet - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeThriftServerHeader * serverHeader;              //@synthesize serverHeader=_serverHeader - In the implementation block
@property (nonatomic,readonly) char serverHeaderIsSet;                                       //@synthesize serverHeaderIsSet=_serverHeaderIsSet - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setClientHeader:(TFNTwitterScribeThriftClientHeader *)arg1 ;
-(id)initWithClientHeader:(id)arg1 serverHeader:(id)arg2 ;
-(TFNTwitterScribeThriftClientHeader *)clientHeader;
-(char)clientHeaderIsSet;
-(char)serverHeaderIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)validate;
-(void)setServerHeader:(TFNTwitterScribeThriftServerHeader *)arg1 ;
-(TFNTwitterScribeThriftServerHeader *)serverHeader;
-(void)write:(id)arg1 ;
@end

