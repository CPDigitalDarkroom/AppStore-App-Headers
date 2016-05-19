/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:47 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTTelcoActivationPrerequisites.h>

@class NSMutableDictionary;

@interface SPTTelcoActivationPrerequisitesWithOverrides : SPTTelcoActivationPrerequisites {

	NSMutableDictionary* _overrides;

}

@property (nonatomic,retain) NSMutableDictionary * overrides;              //@synthesize overrides=_overrides - In the implementation block
-(void)setOverrideValue:(char)arg1 forRequisite:(int)arg2 ;
-(void)clearOverrideValueForRequisite:(int)arg1 ;
-(char)overrideValueForRequisite:(int)arg1 ;
-(id)init;
-(char)satisfied;
-(void)setOverrides:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)overrides;
@end

