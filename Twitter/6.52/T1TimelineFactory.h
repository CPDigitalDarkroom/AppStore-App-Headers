/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimelineFactory.h>

@class NSDictionary, NSString;

@interface T1TimelineFactory : NSObject <TFNTwitterTimelineFactory> {

	NSDictionary* _entries;

}

@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedTimelineFactory;
-(void)_setupEntries;
-(void)_accountFeatureSwitchesDidUpdate:(id)arg1 ;
-(void)_deviceFeatureSwitchesDidUpdate:(id)arg1 ;
-(void)_autoplaySettingsDidChange;
-(void)_networkQualityDidChange;
-(id)timelineIdentifiersForAccount:(id)arg1 ;
-(id)inUseTimelineIdentifiersForAccount:(id)arg1 ;
-(id)timelineForAccount:(id)arg1 identifier:(id)arg2 savedPlistDictionary:(id)arg3 ;
-(id)titleForTimelineWithIdentifier:(id)arg1 account:(id)arg2 ;
-(id)iconForTimelineWithIdentifier:(id)arg1 account:(id)arg2 ;
-(int)panelIDForTimelineWithIdentifier:(id)arg1 ;
-(id)rootViewControllerForTimeline:(id)arg1 account:(id)arg2 ;
-(void)dealloc;
-(id)init;
@end

