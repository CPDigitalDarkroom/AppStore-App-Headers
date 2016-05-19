/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:40 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTNowPlayingButton.h>
#import <Spotify/SPTNowPlayingCollectionButton.h>

@protocol SPTNowPlayingCollectionButton <NSObject>
@property (assign,getter=isInCollection,nonatomic) char inCollection; 
@required
-(char)isInCollection;
-(void)setInCollection:(char)arg1;

@end


@class UIColor, NSString;

@interface SPTNowPlayingCollectionButton : SPTNowPlayingButton <SPTNowPlayingCollectionButton> {

	UIColor* _iconColor;
	float _circleLineWidth;
	UIColor* _circleColor;
	UIColor* _addedCircleColor;
	CGSize _iconSize;
	CGSize _circleSize;

}

@property (assign,nonatomic) unsigned buttonState; 
@property (assign,nonatomic) CGSize circleSize;                                    //@synthesize circleSize=_circleSize - In the implementation block
@property (assign,nonatomic) float circleLineWidth;                                //@synthesize circleLineWidth=_circleLineWidth - In the implementation block
@property (assign,nonatomic) UIColor * circleColor;                                //@synthesize circleColor=_circleColor - In the implementation block
@property (assign,nonatomic) UIColor * addedCircleColor;                           //@synthesize addedCircleColor=_addedCircleColor - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isInCollection,nonatomic) char inCollection; 
+(id)button;
-(char)isInCollection;
-(void)setInCollection:(char)arg1 ;
-(void)setIconColor:(id)arg1 ;
-(id)iconColor;
-(void)applyNPVTheme;
-(void)setCircleSize:(CGSize)arg1 ;
-(UIColor *)circleColor;
-(void)setCircleColor:(UIColor *)arg1 ;
-(float)circleLineWidth;
-(void)setCircleLineWidth:(float)arg1 ;
-(void)applyIcon;
-(UIColor *)addedCircleColor;
-(void)setAddedCircleColor:(UIColor *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(NSString *)description;
-(id)accessibilityLabel;
-(id)accessibilityValue;
-(id)accessibilityHint;
-(void)setIconSize:(CGSize)arg1 ;
-(CGSize)circleSize;
-(CGSize)iconSize;
@end

