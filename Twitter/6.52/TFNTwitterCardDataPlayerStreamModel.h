/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:54 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/TFNTwitterCardContextModel.h>

@class NSString;

@interface TFNTwitterCardDataPlayerStreamModel : NSObject <TFNTwitterCardContextModel> {

	char _isAmplify;
	NSString* _url;
	NSString* _contentType;
	NSString* _mimeType;
	CGSize _size;

}

@property (nonatomic,retain) NSString * url;                        //@synthesize url=_url - In the implementation block
@property (nonatomic,retain) NSString * contentType;                //@synthesize contentType=_contentType - In the implementation block
@property (assign,nonatomic) CGSize size;                           //@synthesize size=_size - In the implementation block
@property (nonatomic,retain) NSString * mimeType;                   //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,readonly) char isAmplify;                      //@synthesize isAmplify=_isAmplify - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCardContext:(id)arg1 ;
-(char)canPlayStreamInline;
-(char)isAmplify;
-(char)_isPlayableMimeType:(id)arg1 ;
-(char)_isPlayableContentType:(id)arg1 ;
-(void)setContentType:(NSString *)arg1 ;
-(char)isAudio;
-(CGSize)size;
-(NSString *)url;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)contentType;
-(void)setUrl:(NSString *)arg1 ;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
@end

