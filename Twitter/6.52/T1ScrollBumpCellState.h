/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:35 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TFNDataViewController, NSIndexPath, TFNTwitterAccount, TFNTwitterStatusCarousel;

@interface T1ScrollBumpCellState : NSObject {

	TFNDataViewController* _controller;
	NSIndexPath* _indexPath;
	TFNTwitterAccount* _account;
	TFNTwitterStatusCarousel* _carousel;
	float _visibilityPercentage;

}

@property (assign,nonatomic,__weak) TFNDataViewController * controller;              //@synthesize controller=_controller - In the implementation block
@property (nonatomic,retain) NSIndexPath * indexPath;                                //@synthesize indexPath=_indexPath - In the implementation block
@property (nonatomic,retain) TFNTwitterAccount * account;                            //@synthesize account=_account - In the implementation block
@property (nonatomic,retain) TFNTwitterStatusCarousel * carousel;                    //@synthesize carousel=_carousel - In the implementation block
@property (assign,nonatomic) float visibilityPercentage;                             //@synthesize visibilityPercentage=_visibilityPercentage - In the implementation block
-(void)setCarousel:(TFNTwitterStatusCarousel *)arg1 ;
-(void)setVisibilityPercentage:(float)arg1 ;
-(float)visibilityPercentage;
-(NSIndexPath *)indexPath;
-(TFNDataViewController *)controller;
-(void)setController:(TFNDataViewController *)arg1 ;
-(void)setIndexPath:(NSIndexPath *)arg1 ;
-(TFNTwitterStatusCarousel *)carousel;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

