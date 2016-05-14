/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:28 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
@class UIView, NSString, UIImage, UIColor;

@interface FBTransientViewStateParams : NSObject {

	char _spinnerAtTopForLoading;
	char _showsTextShadow;
	UIView* _view;
	unsigned _viewState;
	unsigned _showOption;
	NSString* _titleForEmpty;
	NSString* _titleForError;
	NSString* _subtitleForError;
	NSString* _titleForLoading;
	NSString* _buttonTextForEmpty;
	NSString* _buttonTextForError;
	UIImage* _imageForEmptyView;
	UIColor* _textColor;
	UIColor* _shadowColor;
	float _fontSize;
	UIColor* _backgroundColor;
	float _textMarginX;
	float _textOffsetY;
	CGSize _shadowOffset;
	CGRect _viewStateFrame;

}

@property (nonatomic,retain,readonly) UIView * view;                            //@synthesize view=_view - In the implementation block
@property (nonatomic,readonly) unsigned viewState;                              //@synthesize viewState=_viewState - In the implementation block
@property (nonatomic,readonly) unsigned showOption;                             //@synthesize showOption=_showOption - In the implementation block
@property (nonatomic,readonly) CGRect viewStateFrame;                           //@synthesize viewStateFrame=_viewStateFrame - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForEmpty;                   //@synthesize titleForEmpty=_titleForEmpty - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForError;                   //@synthesize titleForError=_titleForError - In the implementation block
@property (nonatomic,copy,readonly) NSString * subtitleForError;                //@synthesize subtitleForError=_subtitleForError - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleForLoading;                 //@synthesize titleForLoading=_titleForLoading - In the implementation block
@property (assign,nonatomic) char spinnerAtTopForLoading;                       //@synthesize spinnerAtTopForLoading=_spinnerAtTopForLoading - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTextForEmpty;              //@synthesize buttonTextForEmpty=_buttonTextForEmpty - In the implementation block
@property (nonatomic,copy,readonly) NSString * buttonTextForError;              //@synthesize buttonTextForError=_buttonTextForError - In the implementation block
@property (nonatomic,retain,readonly) UIImage * imageForEmptyView;              //@synthesize imageForEmptyView=_imageForEmptyView - In the implementation block
@property (nonatomic,retain,readonly) UIColor * textColor;                      //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,readonly) char showsTextShadow;                            //@synthesize showsTextShadow=_showsTextShadow - In the implementation block
@property (nonatomic,retain,readonly) UIColor * shadowColor;                    //@synthesize shadowColor=_shadowColor - In the implementation block
@property (nonatomic,readonly) float fontSize;                                  //@synthesize fontSize=_fontSize - In the implementation block
@property (nonatomic,readonly) CGSize shadowOffset;                             //@synthesize shadowOffset=_shadowOffset - In the implementation block
@property (nonatomic,retain,readonly) UIColor * backgroundColor;                //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) float textMarginX;                               //@synthesize textMarginX=_textMarginX - In the implementation block
@property (nonatomic,readonly) float textOffsetY;                               //@synthesize textOffsetY=_textOffsetY - In the implementation block
-(unsigned)showOption;
-(CGRect)viewStateFrame;
-(NSString *)titleForEmpty;
-(NSString *)titleForError;
-(NSString *)subtitleForError;
-(NSString *)titleForLoading;
-(UIImage *)imageForEmptyView;
-(NSString *)buttonTextForEmpty;
-(NSString *)buttonTextForError;
-(float)textMarginX;
-(float)textOffsetY;
-(char)showsTextShadow;
-(void)setSpinnerAtTopForLoading:(char)arg1 ;
-(char)spinnerAtTopForLoading;
-(id)initWithView:(id)arg1 showOption:(unsigned)arg2 imageForEmptyView:(id)arg3 viewState:(unsigned)arg4 titleForEmpty:(id)arg5 titleForError:(id)arg6 titleForLoading:(id)arg7 spinnerAtTopForLoading:(char)arg8 buttonTextForEmpty:(id)arg9 buttonTextForError:(id)arg10 textColor:(id)arg11 showsTextShadow:(char)arg12 shadowOffset:(CGSize)arg13 backgroundColor:(id)arg14 shadowColor:(id)arg15 fontSize:(float)arg16 textMarginX:(float)arg17 textOffsetY:(float)arg18 ;
-(UIColor *)backgroundColor;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(UIView *)view;
-(CGSize)shadowOffset;
-(UIColor *)shadowColor;
-(UIColor *)textColor;
-(float)fontSize;
-(unsigned)viewState;
@end

