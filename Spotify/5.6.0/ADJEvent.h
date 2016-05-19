/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:48 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol ADJLogger;
@class NSString, NSNumber, NSData, NSMutableDictionary, NSDictionary;

@interface ADJEvent : NSObject <NSCopying> {

	char _emptyReceipt;
	NSString* _eventToken;
	NSNumber* _revenue;
	NSString* _transactionId;
	NSString* _currency;
	NSData* _receipt;
	id<ADJLogger> _logger;
	NSMutableDictionary* _callbackMutableParameters;
	NSMutableDictionary* _partnerMutableParameters;

}

@property (nonatomic,copy,readonly) NSString * eventToken;                                 //@synthesize eventToken=_eventToken - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * revenue;                                    //@synthesize revenue=_revenue - In the implementation block
@property (nonatomic,readonly) NSDictionary * callbackParameters; 
@property (nonatomic,readonly) NSDictionary * partnerParameters; 
@property (nonatomic,copy,readonly) NSString * transactionId;                              //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,copy,readonly) NSString * currency;                                   //@synthesize currency=_currency - In the implementation block
@property (nonatomic,copy,readonly) NSData * receipt;                                      //@synthesize receipt=_receipt - In the implementation block
@property (nonatomic,readonly) char emptyReceipt;                                          //@synthesize emptyReceipt=_emptyReceipt - In the implementation block
@property (nonatomic,retain) id<ADJLogger> logger;                                         //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * callbackMutableParameters;              //@synthesize callbackMutableParameters=_callbackMutableParameters - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * partnerMutableParameters;               //@synthesize partnerMutableParameters=_partnerMutableParameters - In the implementation block
+(id)eventWithEventToken:(id)arg1 ;
-(void)addCallbackParameter:(id)arg1 value:(id)arg2 ;
-(id)initWithEventToken:(id)arg1 ;
-(char)checkEventToken:(id)arg1 ;
-(char)isValidParameter:(id)arg1 attributeType:(id)arg2 parameterName:(id)arg3 ;
-(NSMutableDictionary *)callbackMutableParameters;
-(void)setCallbackMutableParameters:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)partnerMutableParameters;
-(void)setPartnerMutableParameters:(NSMutableDictionary *)arg1 ;
-(char)checkRevenue:(id)arg1 currency:(id)arg2 ;
-(char)checkReceipt:(id)arg1 transactionId:(id)arg2 ;
-(void)setRevenue:(double)arg1 currency:(id)arg2 ;
-(void)setReceipt:(id)arg1 transactionId:(id)arg2 ;
-(void)addPartnerParameter:(id)arg1 value:(id)arg2 ;
-(NSNumber *)revenue;
-(NSString *)eventToken;
-(NSDictionary *)callbackParameters;
-(NSDictionary *)partnerParameters;
-(char)emptyReceipt;
-(NSData *)receipt;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)currency;
-(void)setTransactionId:(NSString *)arg1 ;
-(NSString *)transactionId;
@end

