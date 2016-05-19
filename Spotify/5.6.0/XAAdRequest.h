/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:22 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSNumber, NSDictionary, NSArray, NSMutableArray;

@interface XAAdRequest : NSObject <NSCopying> {

	char _dfpRequest;
	char _latestAd;
	NSString* _uuid;
	NSString* _adName;
	NSString* _tag;
	unsigned _length;
	NSNumber* _networkId;
	NSString* _adUnit;
	NSDictionary* _dfpParameters;
	NSString* _genre;
	NSString* _stationFormat;
	NSString* _appKey;
	NSString* _apiKey;
	NSArray* _adNames;
	NSString* _locationDescription;
	NSMutableArray* _keywords;
	CFUUIDRef _uuidRef;
	double _latitude;
	double _longitude;

}

@property (nonatomic,retain,readonly) NSString * uuid;                    //@synthesize uuid=_uuid - In the implementation block
@property (nonatomic,retain) NSString * adName;                           //@synthesize adName=_adName - In the implementation block
@property (nonatomic,retain) NSString * tag;                              //@synthesize tag=_tag - In the implementation block
@property (assign,nonatomic) unsigned length;                             //@synthesize length=_length - In the implementation block
@property (assign,nonatomic) char dfpRequest;                             //@synthesize dfpRequest=_dfpRequest - In the implementation block
@property (nonatomic,retain) NSNumber * networkId;                        //@synthesize networkId=_networkId - In the implementation block
@property (nonatomic,retain) NSString * adUnit;                           //@synthesize adUnit=_adUnit - In the implementation block
@property (nonatomic,retain) NSDictionary * dfpParameters;                //@synthesize dfpParameters=_dfpParameters - In the implementation block
@property (nonatomic,retain) NSString * genre;                            //@synthesize genre=_genre - In the implementation block
@property (nonatomic,retain) NSString * stationFormat;                    //@synthesize stationFormat=_stationFormat - In the implementation block
@property (nonatomic,readonly) double latitude;                           //@synthesize latitude=_latitude - In the implementation block
@property (nonatomic,readonly) double longitude;                          //@synthesize longitude=_longitude - In the implementation block
@property (assign,nonatomic) char latestAd;                               //@synthesize latestAd=_latestAd - In the implementation block
@property (nonatomic,copy) NSString * appKey;                             //@synthesize appKey=_appKey - In the implementation block
@property (nonatomic,copy) NSString * apiKey;                             //@synthesize apiKey=_apiKey - In the implementation block
@property (nonatomic,retain) NSArray * adNames;                           //@synthesize adNames=_adNames - In the implementation block
@property (nonatomic,retain) NSString * locationDescription;              //@synthesize locationDescription=_locationDescription - In the implementation block
@property (nonatomic,retain) NSMutableArray * keywords;                   //@synthesize keywords=_keywords - In the implementation block
@property (assign) CFUUIDRef uuidRef;                                     //@synthesize uuidRef=_uuidRef - In the implementation block
+(id)adRequestForDfpWithNetworkId:(id)arg1 andAdUnit:(id)arg2 withParameters:(id)arg3 ;
+(id)adRequestForDfp;
+(id)adRequestWithAdName:(id)arg1 ;
+(id)adRequestWithAdTag:(id)arg1 ;
+(id)adRequestWithAdLength:(unsigned)arg1 ;
+(id)bulkAdRequestWithAppKey:(id)arg1 apiKey:(id)arg2 ;
+(id)bulkAdRequestWithAppKey:(id)arg1 apiKey:(id)arg2 withAdNames:(id)arg3 ;
-(void)setAdName:(NSString *)arg1 ;
-(void)setLocationWithLatitude:(double)arg1 longitude:(double)arg2 ;
-(NSString *)apiKey;
-(void)generateDefaultParametersWithUserData:(id)arg1 ;
-(NSNumber *)networkId;
-(void)setNetworkId:(NSNumber *)arg1 ;
-(NSString *)adUnit;
-(void)setAdUnit:(NSString *)arg1 ;
-(NSDictionary *)dfpParameters;
-(NSString *)appKey;
-(NSArray *)adNames;
-(NSString *)stationFormat;
-(void)setStationFormat:(NSString *)arg1 ;
-(id)keywordsAsCommaDelimitedString;
-(void)setLocationWithDescription:(id)arg1 ;
-(void)addKeyword:(id)arg1 ;
-(NSString *)adName;
-(char)latestAd;
-(void)setLatestAd:(char)arg1 ;
-(char)dfpRequest;
-(void)setDfpRequest:(char)arg1 ;
-(CFUUIDRef)uuidRef;
-(id)initWithNetworkId:(id)arg1 andAdUnit:(id)arg2 withParameters:(id)arg3 ;
-(id)initWithAdName:(id)arg1 adLength:(unsigned)arg2 ;
-(id)initWithAppKey:(id)arg1 apiKey:(id)arg2 ;
-(void)setAdNames:(NSArray *)arg1 ;
-(char)isEqualToAdRequest:(id)arg1 ;
-(void)setAppKey:(NSString *)arg1 ;
-(void)setDfpParameters:(NSDictionary *)arg1 ;
-(void)setUuidRef:(CFUUIDRef)arg1 ;
-(NSString *)genre;
-(double)latitude;
-(double)longitude;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(unsigned)length;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)tag;
-(void)setTag:(NSString *)arg1 ;
-(id)initWithUUID:(id)arg1 ;
-(void)setLength:(unsigned)arg1 ;
-(NSString *)uuid;
-(void)setApiKey:(NSString *)arg1 ;
-(void)setKeywords:(NSMutableArray *)arg1 ;
-(NSMutableArray *)keywords;
-(void)setGenre:(NSString *)arg1 ;
-(NSString *)locationDescription;
-(void)setLocationDescription:(NSString *)arg1 ;
@end

