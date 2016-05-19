/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTNowPlayingButton.h>
#import <Spotify/SPTNowPlayingPlayButton.h>

@protocol SPTNowPlayingPlayButton <NSObject>
@property (assign,getter=isPlaying,nonatomic) char playing; 
@required
-(char)isPlaying;
-(void)setPlaying:(char)arg1;

@end


@class UIColor, NSString;

@interface SPTNowPlayingPlayButton : SPTNowPlayingButton <SPTNowPlayingPlayButton> {

	UIColor* _circleColor;
	float _circleLineWidth;
	CGSize _circleSize;

}

@property (assign,nonatomic) unsigned buttonState; 
@property (assign,nonatomic) CGSize circleSize;                          //@synthesize circleSize=_circleSize - In the implementation block
@property (nonatomic,retain) UIColor * circleColor;                      //@synthesize circleColor=_circleColor - In the implementation block
@property (assign,nonatomic) float circleLineWidth;                      //@synthesize circleLineWidth=_circleLineWidth - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isPlaying,nonatomic) char playing; 
+(id)button;
-(void)setCircleSize:(CGSize)arg1 ;
-(UIColor *)circleColor;
-(void)setCircleColor:(UIColor *)arg1 ;
-(float)circleLineWidth;
-(void)setCircleLineWidth:(float)arg1 ;
-(void)applyIcon;
-(char)isPlaying;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(id)accessibilityLabel;
-(unsigned long long)accessibilityTraits;
-(CGSize)circleSize;
-(void)setPlaying:(char)arg1 ;
@end

