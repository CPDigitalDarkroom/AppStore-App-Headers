/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSURL, NSDictionary;

@interface SPTPartyPreset : NSObject {

	NSString* _key;
	NSString* _name;
	NSURL* _imageURL;
	NSDictionary* _energyLevelTypeToDescription;

}

@property (nonatomic,readonly) NSString * key;                                         //@synthesize key=_key - In the implementation block
@property (nonatomic,readonly) NSString * name;                                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSURL * imageURL;                                       //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,retain) NSDictionary * energyLevelTypeToDescription;              //@synthesize energyLevelTypeToDescription=_energyLevelTypeToDescription - In the implementation block
-(NSDictionary *)energyLevelTypeToDescription;
-(void)setEnergyLevelTypeToDescription:(NSDictionary *)arg1 ;
-(id)energyLevelForEnergyLevelType:(int)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)name;
-(NSString *)key;
-(NSURL *)imageURL;
@end

