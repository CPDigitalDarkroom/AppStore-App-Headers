/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:57 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/CLSEventLogEvent.h>

@class NSDictionary;

@interface CLSAnalyticsMetadataEvent : CLSEventLogEvent

@property (nonatomic,copy,readonly) NSDictionary * metadataJSONData; 
-(id)initWithPriority:(unsigned)arg1 timestamp:(unsigned long long)arg2 metadataJSONData:(id)arg3 ;
-(id)initWithPriority:(unsigned)arg1 timestamp:(unsigned long long)arg2 key:(id)arg3 payload:(id)arg4 ;
-(NSDictionary *)metadataJSONData;
@end

