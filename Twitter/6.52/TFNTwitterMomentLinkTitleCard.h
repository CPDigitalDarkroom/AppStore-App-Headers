/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TFNUI/TFNPlistSerialization.h>

@class NSString;

@interface TFNTwitterMomentLinkTitleCard : NSObject <TFNPlistSerialization> {

	NSString* _url;
	NSString* _title;
	NSString* _displayURL;
	NSString* _vanitySource;

}

@property (nonatomic,readonly) NSString * url;                       //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSString * title;                     //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) NSString * displayURL;                //@synthesize displayURL=_displayURL - In the implementation block
@property (nonatomic,readonly) NSString * vanitySource;              //@synthesize vanitySource=_vanitySource - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithJSONDictionary:(id)arg1 ;
-(id)plistDictionaryValue;
-(NSString *)displayURL;
-(NSString *)vanitySource;
-(id)initWithPlistDictionary:(id)arg1 ;
-(id)initWithURL:(id)arg1 title:(id)arg2 displayURL:(id)arg3 vanitySource:(id)arg4 ;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(NSString *)description;
-(NSString *)url;
-(NSString *)title;
@end

