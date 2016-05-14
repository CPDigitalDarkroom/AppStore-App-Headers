/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:09 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBContainerCollectionViewCell.h>

@protocol FBMagicStoryEditCellDelegate;
@class UIButton;

@interface FBMagicStoryEditCell : FBContainerCollectionViewCell {

	UIButton* _removeButton;
	unsigned _index;
	float _imageRatio;
	id<FBMagicStoryEditCellDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<FBMagicStoryEditCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_didTapRemoveButton;
-(void)setRemoveButtonShown:(char)arg1 animated:(char)arg2 ;
-(void)layoutAssetView;
-(void)configureWithIndex:(unsigned)arg1 asset:(id)arg2 session:(id)arg3 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setDelegate:(id<FBMagicStoryEditCellDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<FBMagicStoryEditCellDelegate>)delegate;
-(void)prepareForReuse;
@end

