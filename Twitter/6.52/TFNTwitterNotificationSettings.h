/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:39 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>
#import <Twitter/TFSModel.h>

@class TFNTwitterNotificationSettingsTemplate, NSDate, NSNumber, NSMutableDictionary, NSString;

@interface TFNTwitterNotificationSettings : NSObject <NSCoding, TFSModel> {

	TFNTwitterNotificationSettingsTemplate* _template;
	NSDate* _nextCheckinTime;
	NSNumber* _sleepSettingEnabled;
	NSNumber* _sleepHourBegin;
	NSNumber* _sleepHourEnd;
	NSMutableDictionary* _settings;

}

@property (nonatomic,retain) TFNTwitterNotificationSettingsTemplate * template;              //@synthesize template=_template - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * settings;                                 //@synthesize settings=_settings - In the implementation block
@property (nonatomic,readonly) NSDate * nextCheckinTime;                                     //@synthesize nextCheckinTime=_nextCheckinTime - In the implementation block
@property (nonatomic,retain) NSNumber * sleepSettingEnabled;                                 //@synthesize sleepSettingEnabled=_sleepSettingEnabled - In the implementation block
@property (nonatomic,retain) NSNumber * sleepHourBegin;                                      //@synthesize sleepHourBegin=_sleepHourBegin - In the implementation block
@property (nonatomic,retain) NSNumber * sleepHourEnd;                                        //@synthesize sleepHourEnd=_sleepHourEnd - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setState:(id)arg1 forSetting:(id)arg2 ;
-(void)setSleepSettingEnabled:(NSNumber *)arg1 ;
-(void)setSleepHourBegin:(NSNumber *)arg1 ;
-(void)setSleepHourEnd:(NSNumber *)arg1 ;
-(NSNumber *)sleepSettingEnabled;
-(char)booleanStateForSettingID:(id)arg1 ;
-(void)setBooleanState:(char)arg1 forSettingID:(id)arg2 ;
-(id)stateForSettingID:(id)arg1 ;
-(NSNumber *)sleepHourBegin;
-(NSNumber *)sleepHourEnd;
-(void)updateWithTemplate:(id)arg1 settings:(id)arg2 checkinTimeDeltaHours:(float)arg3 ;
-(id)initWithTemplate:(id)arg1 settings:(id)arg2 checkinTimeDeltaHours:(float)arg3 sleepSettingEnabled:(id)arg4 sleepHourBegin:(id)arg5 sleepHourEnd:(id)arg6 ;
-(id)_mutableSettingsWithSettings:(id)arg1 ;
-(void)_addDefaultSettingsIfNeeded;
-(void)updateWithTemplate:(id)arg1 settings:(id)arg2 ;
-(void)_updateNextCheckinTimeWithDeltaHours:(float)arg1 ;
-(id)initWithTemplate:(id)arg1 settings:(id)arg2 checkinTimeDeltaHours:(float)arg3 userDeviceRequest:(id)arg4 ;
-(NSDate *)nextCheckinTime;
-(id)JSONDictionary;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSMutableDictionary *)settings;
-(void)setSettings:(NSMutableDictionary *)arg1 ;
-(void)setTemplate:(TFNTwitterNotificationSettingsTemplate *)arg1 ;
-(TFNTwitterNotificationSettingsTemplate *)template;
@end

