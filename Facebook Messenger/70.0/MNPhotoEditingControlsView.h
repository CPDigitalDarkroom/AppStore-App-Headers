/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:58 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIView.h>

@protocol MNPhotoEditingControlsViewDelegate;
@class NSMutableArray, UIButton;

@interface MNPhotoEditingControlsView : UIView {

	NSMutableArray* _editingControlsViews;
	UIButton* _drawButton;
	UIButton* _textButton;
	UIButton* _trashButton;
	id<MNPhotoEditingControlsViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MNPhotoEditingControlsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)_drawButtonPressed:(id)arg1 ;
-(void)_textButtonPressed:(id)arg1 ;
-(void)_layoutEditingControlsView;
-(void)_showButtons;
-(void)changeSelectedButtons:(unsigned)arg1 ;
-(id)initWithFrame:(CGRect)arg1 withEditOptions:(char)arg2 ;
-(void)addEditingControlsView:(id)arg1 ;
-(char)intersectsWithTrashButton:(id)arg1 ;
-(void)showTrashButton:(char)arg1 ;
-(void)setDelegate:(id<MNPhotoEditingControlsViewDelegate>)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(id<MNPhotoEditingControlsViewDelegate>)delegate;
@end

