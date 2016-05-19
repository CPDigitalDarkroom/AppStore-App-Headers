/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:42 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <UIKit/UIView.h>

@interface SPTPodcastCircularPlaystateView : UIView {

	float _completionRatio;

}

@property (assign,nonatomic) float completionRatio;              //@synthesize completionRatio=_completionRatio - In the implementation block
-(id)circleColor;
-(float)completionRatio;
-(float)quantizedCompletionRatio;
-(CGSize)preferedSize;
-(void)setCompletionRatio:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)fillColor;
@end

