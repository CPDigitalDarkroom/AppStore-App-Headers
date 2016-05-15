/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:32 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>
#import <Twitter/TFNTwitterAuthenticated.h>

@class TFNTwitterAccount, UILabel, T1StatusPhotoVideoForwardView, NSString;

@interface T1TrendsPlusImageView : UIView <TFNTwitterAuthenticated> {

	TFNTwitterAccount* _account;
	UILabel* _topTrendLabel;
	T1StatusPhotoVideoForwardView* _photoVideoForwardView;

}

@property (nonatomic,readonly) UILabel * topTrendLabel;                                            //@synthesize topTrendLabel=_topTrendLabel - In the implementation block
@property (nonatomic,readonly) T1StatusPhotoVideoForwardView * photoVideoForwardView;              //@synthesize photoVideoForwardView=_photoVideoForwardView - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) TFNTwitterAccount * account;                                          //@synthesize account=_account - In the implementation block
+(CGRect)aspectScaledFrameWithHeight:(float)arg1 ;
+(CGRect)aspectScaledFrameWithWidth:(float)arg1 ;
-(id)initWithFrame:(CGRect)arg1 account:(id)arg2 ;
-(T1StatusPhotoVideoForwardView *)photoVideoForwardView;
-(void)setStatus:(id)arg1 imageSize:(CGSize)arg2 ;
-(UILabel *)topTrendLabel;
-(id)calculatedLayoutMetrics;
-(void)layoutSubviews;
-(void)setAccount:(TFNTwitterAccount *)arg1 ;
-(TFNTwitterAccount *)account;
@end

