/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SPTHubDictionaryTransformable.h>

@class NSURL, NSString, SPTHubButtonData;

@interface SPTHubViewHeaderData : NSObject <SPTHubDictionaryTransformable> {

	unsigned _style;
	NSURL* _backgroundImageURL;
	NSString* _title;
	NSString* _subtitle;
	SPTHubButtonData* _buttonData;

}

@property (nonatomic,readonly) unsigned style;                               //@synthesize style=_style - In the implementation block
@property (nonatomic,copy,readonly) NSURL * backgroundImageURL;              //@synthesize backgroundImageURL=_backgroundImageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                        //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitle;                     //@synthesize subtitle=_subtitle - In the implementation block
@property (nonatomic,readonly) SPTHubButtonData * buttonData;                //@synthesize buttonData=_buttonData - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SPTHubButtonData *)buttonData;
-(id)initWithStyle:(unsigned)arg1 backgroundImageURL:(id)arg2 title:(id)arg3 subtitle:(id)arg4 buttonData:(id)arg5 ;
-(id)initWithDictionary:(id)arg1 pathSet:(id)arg2 ;
-(NSString *)title;
-(unsigned)style;
-(NSString *)subtitle;
-(NSURL *)backgroundImageURL;
@end

