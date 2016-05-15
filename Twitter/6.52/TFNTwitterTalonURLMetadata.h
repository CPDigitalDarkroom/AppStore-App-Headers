/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:51 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSArray, NSString, NSDate;

@interface TFNTwitterTalonURLMetadata : NSObject <NSCoding, NSCopying> {

	unsigned _status;
	NSURL* _finalURL;
	NSArray* _intermediateHops;
	NSString* _slug;
	NSURL* _firstURL;
	NSArray* _resolutionChain;
	NSDate* _expirationDate;

}

@property (nonatomic,readonly) NSString * scribeContext; 
@property (nonatomic,retain) NSURL * firstURL;                               //@synthesize firstURL=_firstURL - In the implementation block
@property (nonatomic,readonly) NSURL * finalURL;                             //@synthesize finalURL=_finalURL - In the implementation block
@property (nonatomic,copy) NSArray * resolutionChain;                        //@synthesize resolutionChain=_resolutionChain - In the implementation block
@property (nonatomic,retain) NSDate * expirationDate;                        //@synthesize expirationDate=_expirationDate - In the implementation block
@property (assign,nonatomic) unsigned status;                                //@synthesize status=_status - In the implementation block
@property (getter=isValid,nonatomic,readonly) char valid; 
@property (getter=isExpired,nonatomic,readonly) char expired; 
@property (nonatomic,copy) NSString * slug;                                  //@synthesize slug=_slug - In the implementation block
@property (nonatomic,copy,readonly) NSArray * intermediateHops;              //@synthesize intermediateHops=_intermediateHops - In the implementation block
-(NSString *)scribeContext;
-(id)initWithJSONDictionary:(id)arg1 ;
-(NSString *)slug;
-(void)setSlug:(NSString *)arg1 ;
-(id)plistDictionaryValue;
-(id)finalURLFromFullResolutionChain:(char)arg1 ;
-(NSArray *)intermediateHops;
-(id)initWithPlistDictionary:(id)arg1 ;
-(NSArray *)resolutionChain;
-(void)setFirstURL:(NSURL *)arg1 ;
-(void)setResolutionChain:(NSArray *)arg1 ;
-(NSURL *)finalURL;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(char)isValid;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned)status;
-(void)setStatus:(unsigned)arg1 ;
-(NSDate *)expirationDate;
-(void)setExpirationDate:(NSDate *)arg1 ;
-(NSURL *)firstURL;
-(char)isExpired;
@end

