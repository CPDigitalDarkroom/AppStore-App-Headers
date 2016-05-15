/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:55 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/TFNTwitterTimelineEntryContext.h>

@class NSString;

@interface TFNTwitterCompositionItemEntryContext : NSObject <TFNTwitterTimelineEntryContext> {

	long long _statusID;

}

@property (nonatomic,readonly) long long statusID;                  //@synthesize statusID=_statusID - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(long long)statusID;
-(id)initWithTimelinePlistDictionary:(id)arg1 ;
-(id)timelinePlistDictionaryValue;
-(id)initWithStatusID:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(char)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)entryID;
@end

