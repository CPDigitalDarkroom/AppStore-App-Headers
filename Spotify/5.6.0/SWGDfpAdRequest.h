/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SWGObject.h>

@class NSArray, NSNumber, NSString;

@interface SWGDfpAdRequest : SWGObject {

	NSArray* _parameters;
	NSNumber* _networkId;
	NSString* _adUnit;

}

@property (nonatomic,retain) NSArray * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,retain) NSNumber * networkId;              //@synthesize networkId=_networkId - In the implementation block
@property (nonatomic,retain) NSString * adUnit;                 //@synthesize adUnit=_adUnit - In the implementation block
-(NSNumber *)networkId;
-(void)setNetworkId:(NSNumber *)arg1 ;
-(NSString *)adUnit;
-(void)setAdUnit:(NSString *)arg1 ;
-(id)parameters:(id)arg1 networkId:(id)arg2 adUnit:(id)arg3 ;
-(id)initWithValues:(id)arg1 ;
-(NSArray *)parameters;
-(void)setParameters:(NSArray *)arg1 ;
-(id)asDictionary;
@end

