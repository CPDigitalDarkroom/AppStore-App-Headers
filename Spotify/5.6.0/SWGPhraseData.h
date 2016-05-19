/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:21 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/SWGObject.h>

@class NSString, NSArray;

@interface SWGPhraseData : SWGObject {

	NSString* _keyword;
	NSString* _phrase;
	NSArray* _homophones;

}

@property (nonatomic,retain) NSString * keyword;                //@synthesize keyword=_keyword - In the implementation block
@property (nonatomic,retain) NSString * phrase;                 //@synthesize phrase=_phrase - In the implementation block
@property (nonatomic,retain) NSArray * homophones;              //@synthesize homophones=_homophones - In the implementation block
-(id)keyword:(id)arg1 phrase:(id)arg2 homophones:(id)arg3 ;
-(NSArray *)homophones;
-(void)setHomophones:(NSArray *)arg1 ;
-(id)initWithValues:(id)arg1 ;
-(void)setKeyword:(NSString *)arg1 ;
-(NSString *)keyword;
-(id)asDictionary;
-(NSString *)phrase;
-(void)setPhrase:(NSString *)arg1 ;
@end

