/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:22:20 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/MessengerCompressed-iphoneos-arm64,iphoneos-armv7-Structs.h>
#import <UIKit/UIButton.h>
#import <UIKit/UITextViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBAccessibilityInvalidationEventsListener.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSearchTextFieldProtocol.h>

@protocol FBNavigationBarSearchTextFieldDelegate;
@class NSAttributedString, NSString, FBNavigationBarSearchTextView, UIImageView, UIView, UIButton, FBNavigationBarSearchTextFieldConfig, UIColor, UIImage;

@interface FBNavigationBarSearchTextField : UIButton <UITextViewDelegate, FBAccessibilityInvalidationEventsListener, FBSearchTextFieldProtocol> {

	struct {
		unsigned delegateBackspaceButtonTapped : 1;
		unsigned delegateSearchButtonTapped : 1;
		unsigned delegateDidChange : 1;
		unsigned delegateClearButtonTapped : 1;
		unsigned delegateTextDidBeginEditing : 1;
		unsigned delegateTextShouldBeginEditing : 1;
		unsigned delegateTextDidAttemptToBeginEditing : 1;
		unsigned delegateTextDidEndEditing : 1;
		unsigned delegateTextShouldEndEditing : 1;
	}  _flags;
	FBNavigationBarSearchTextView* _internalTextView;
	char _hideClearButtonIfNotInputting;
	UIImageView* _magnifyingGlassImageView;
	UIView* _magnifyingGlassCustomView;
	UIView* _rightAccessoryView;
	NSString* _titleText;
	UIButton* _clearButton;
	char _dictationInProgress;
	FBNavigationBarSearchTextFieldConfig* _config;
	NSString* _defaultPlaceholderText;
	UIView* _containerView;
	char _showMagnifyingGlass;
	char _useLargeFont;
	char _scopedSearchOverride;
	char _inBackspaceMode;
	char _shouldVerticallyCenterAlignImages;
	char _centerSearchText;
	char _showClearButton;
	char _textFieldInteractionEnabled;
	char _isQueryCentered;
	char _isAnimating;
	NSString* _subtitleText;
	unsigned _style;
	/*^block*/id _onTapBlock;
	UIColor* _textColor;
	UIColor* _customUniformBackgroundColor;
	UIColor* _customPlaceholderTextColor;
	NSString* _customPlaceholderText;
	UIImage* _customMagnifyingGlassImage;
	id<FBNavigationBarSearchTextFieldDelegate> _textInputDelegate;
	NSRange _highlightRange;

}

@property (assign,nonatomic) char isQueryCentered;                                                             //@synthesize isQueryCentered=_isQueryCentered - In the implementation block
@property (assign,nonatomic) char isAnimating;                                                                 //@synthesize isAnimating=_isAnimating - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleText; 
@property (nonatomic,readonly) NSRange highlightRange;                                                         //@synthesize highlightRange=_highlightRange - In the implementation block
@property (nonatomic,readonly) char inBackspaceMode;                                                           //@synthesize inBackspaceMode=_inBackspaceMode - In the implementation block
@property (nonatomic,copy) UIColor * textColor;                                                                //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) char shouldVerticallyCenterAlignImages;                                           //@synthesize shouldVerticallyCenterAlignImages=_shouldVerticallyCenterAlignImages - In the implementation block
@property (nonatomic,copy) UIColor * customUniformBackgroundColor;                                             //@synthesize customUniformBackgroundColor=_customUniformBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * customPlaceholderTextColor;                                               //@synthesize customPlaceholderTextColor=_customPlaceholderTextColor - In the implementation block
@property (nonatomic,copy) NSString * customPlaceholderText;                                                   //@synthesize customPlaceholderText=_customPlaceholderText - In the implementation block
@property (nonatomic,copy) UIImage * customMagnifyingGlassImage;                                               //@synthesize customMagnifyingGlassImage=_customMagnifyingGlassImage - In the implementation block
@property (assign,nonatomic,__weak) id<FBNavigationBarSearchTextFieldDelegate> textInputDelegate;              //@synthesize textInputDelegate=_textInputDelegate - In the implementation block
@property (assign,nonatomic) char centerSearchText;                                                            //@synthesize centerSearchText=_centerSearchText - In the implementation block
@property (assign,nonatomic) char showClearButton;                                                             //@synthesize showClearButton=_showClearButton - In the implementation block
@property (assign,nonatomic) char textFieldInteractionEnabled;                                                 //@synthesize textFieldInteractionEnabled=_textFieldInteractionEnabled - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSAttributedString * attributedTitleText; 
@property (nonatomic,copy,readonly) NSString * subtitleText;                                                   //@synthesize subtitleText=_subtitleText - In the implementation block
@property (assign,getter=isSelected,nonatomic) char selected; 
@property (assign,nonatomic) char showMagnifyingGlass;                                                         //@synthesize showMagnifyingGlass=_showMagnifyingGlass - In the implementation block
@property (assign,nonatomic) unsigned style;                                                                   //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) char useLargeFont;                                                                //@synthesize useLargeFont=_useLargeFont - In the implementation block
@property (assign,nonatomic) char scopedSearchOverride;                                                        //@synthesize scopedSearchOverride=_scopedSearchOverride - In the implementation block
@property (nonatomic,copy) id onTapBlock;                                                                      //@synthesize onTapBlock=_onTapBlock - In the implementation block
+(void)setConfigProviderClass:(Class)arg1 ;
+(void)_scrollCaretToVisible:(id)arg1 ;
-(void)setUseLargeFont:(char)arg1 ;
-(void)setOnTapBlock:(id)arg1 ;
-(void)setCenterSearchText:(char)arg1 ;
-(char)centerSearchText;
-(void)setTitleTextFromContext:(id)arg1 withSubtitle:(id)arg2 ;
-(void)setAttributedTitleText:(id)arg1 withSubtitle:(id)arg2 ;
-(void)setTitleText:(id)arg1 withSubtitle:(id)arg2 ;
-(void)setCustomRightAccessoryView:(id)arg1 ;
-(void)animateWithText:(id)arg1 image:(id)arg2 color:(id)arg3 ;
-(void)didReceiveFontInvalidation;
-(void)_setupContainerView;
-(void)_textFieldTapped:(id)arg1 event:(id)arg2 ;
-(void)setShowMagnifyingGlass:(char)arg1 ;
-(id)_newInternalTextView;
-(id)_newClearButton;
-(id)_configureRightAccessorySearchButtonWithSelectedState:(char)arg1 ;
-(void)setIsAnimating:(char)arg1 ;
-(void)_updateCustomRightAccessoryVisibility;
-(void)_updateClearButtonVisibility;
-(void)_searchButtonTapped;
-(float)verticalOriginForHeight:(float)arg1 ;
-(char)shouldVerticallyCenterAlignImages;
-(void)_centerQuery;
-(id)_truncateText:(id)arg1 withTextView:(id)arg2 toWidth:(float)arg3 ;
-(void)_hack_resetTintForView:(id)arg1 ;
-(void)setTitleText:(id)arg1 withSubtitle:(id)arg2 highlightRange:(NSRange)arg3 ;
-(id)_displayTextForString:(id)arg1 subtitle:(id)arg2 highlightRange:(NSRange)arg3 ;
-(void)_appendSubtitle:(id)arg1 toTitle:(id)arg2 ;
-(void)_clearSearchText;
-(char)_isClearButtonVisible;
-(char)_isDictationActiveInTextView:(id)arg1 ;
-(void)removeHighlight;
-(void)expandHighlight;
-(void)_hack_scrollCaretToVisibleAfterDelay;
-(void)_hack_cancelScrollCaretToVisibleAfterDelay;
-(void)_setText:(id)arg1 textColor:(id)arg2 image:(id)arg3 ;
-(void)setCustomPlaceholderTextColor:(UIColor *)arg1 ;
-(void)selectText;
-(NSAttributedString *)attributedTitleText;
-(NSRange)highlightRange;
-(char)inBackspaceMode;
-(char)textFieldInteractionEnabled;
-(void)setTextFieldInteractionEnabled:(char)arg1 ;
-(char)showClearButton;
-(void)setShowClearButton:(char)arg1 ;
-(char)showMagnifyingGlass;
-(char)useLargeFont;
-(char)scopedSearchOverride;
-(void)setScopedSearchOverride:(char)arg1 ;
-(id)onTapBlock;
-(void)setCustomUniformBackgroundColor:(UIColor *)arg1 ;
-(void)setCustomMagnifyingGlassImage:(UIImage *)arg1 ;
-(void)_truncateTitleTextIfNeeded;
-(char)isQueryCentered;
-(void)setShouldVerticallyCenterAlignImages:(char)arg1 ;
-(UIColor *)customUniformBackgroundColor;
-(UIColor *)customPlaceholderTextColor;
-(UIImage *)customMagnifyingGlassImage;
-(void)setIsQueryCentered:(char)arg1 ;
-(NSString *)customPlaceholderText;
-(void)setCustomPlaceholderText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(id)backgroundColor;
-(void)dealloc;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(char)resignFirstResponder;
-(char)becomeFirstResponder;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)text;
-(unsigned)style;
-(void)setTintColor:(id)arg1 ;
-(char)isFirstResponder;
-(char)scrollsToTop;
-(void)setScrollsToTop:(char)arg1 ;
-(void)setStyle:(unsigned)arg1 ;
-(void)setSelected:(char)arg1 ;
-(UIColor *)textColor;
-(char)hasText;
-(void)setKeyboardType:(int)arg1 ;
-(void)setKeyboardAppearance:(int)arg1 ;
-(void)setReturnKeyType:(int)arg1 ;
-(char)isAnimating;
-(void)textViewDidBeginEditing:(id)arg1 ;
-(void)textViewDidEndEditing:(id)arg1 ;
-(char)textViewShouldBeginEditing:(id)arg1 ;
-(char)textViewShouldEndEditing:(id)arg1 ;
-(char)textView:(id)arg1 shouldChangeTextInRange:(NSRange)arg2 replacementText:(id)arg3 ;
-(void)textViewDidChange:(id)arg1 ;
-(void)textViewDidChangeSelection:(id)arg1 ;
-(char)isAccessibilityElement;
-(int)accessibilityElementCount;
-(id)accessibilityElementAtIndex:(int)arg1 ;
-(int)indexOfAccessibilityElement:(id)arg1 ;
-(id)accessibilityElements;
-(void)setTitleText:(NSString *)arg1 ;
-(void)_clearButtonTapped:(id)arg1 ;
-(NSString *)titleText;
-(id<FBNavigationBarSearchTextFieldDelegate>)textInputDelegate;
-(void)setTextInputDelegate:(id<FBNavigationBarSearchTextFieldDelegate>)arg1 ;
-(NSString *)subtitleText;
@end

