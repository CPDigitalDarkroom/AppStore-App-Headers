/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:15 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UICollectionView.h>

@class UIView;

@interface FBMStickerTrayCollectionView : UICollectionView {

	int _stickerTrayCollectionViewType;
	UIView* _extraView;

}

@property (assign,nonatomic) int stickerTrayCollectionViewType;              //@synthesize stickerTrayCollectionViewType=_stickerTrayCollectionViewType - In the implementation block
@property (nonatomic,retain) UIView * extraView;                             //@synthesize extraView=_extraView - In the implementation block
-(void)setExtraView:(UIView *)arg1 ;
-(void)setStickerTrayCollectionViewType:(int)arg1 ;
-(UIView *)extraView;
-(int)stickerTrayCollectionViewType;
-(void)layoutSubviews;
@end

