/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTCommunicationsSettingModel.h>

@class NSString;

@interface SPTCommunicationsSetting : NSObject <SPTCommunicationsSettingModel> {

	char isOn;
	NSString* name;
	int type;
	int frequency;
	NSString* localizedTitle;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * localizedTitle; 
@property (assign,nonatomic) char isOn; 
@property (assign,nonatomic) int frequency; 
@property (assign,nonatomic) int type; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(int)frequencyForRawValue:(id)arg1 type:(int)arg2 ;
+(id)communicationsSettingWithJSONDictionary:(id)arg1 type:(int)arg2 ;
+(id)stringValue:(char)arg1 forFrequency:(int)arg2 ;
-(void)setIsOn:(char)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setType:(int)arg1 ;
-(int)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)frequency;
-(void)setFrequency:(int)arg1 ;
-(char)isOn;
-(NSString *)localizedTitle;
-(void)setLocalizedTitle:(NSString *)arg1 ;
@end

