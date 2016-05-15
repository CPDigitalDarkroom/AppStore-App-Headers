/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:30 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <Twitter/T1DirectMessageAbstractConversationEntryDisplayModel.h>

@class NSString, UIImage, UIFont, TFNFlavoredRange, TFNAttributedTextModel;

@interface T1DirectMessageActivityEntryDisplayModel : T1DirectMessageAbstractConversationEntryDisplayModel {

	NSString* _text;
	UIImage* _accessoryImage;
	UIFont* _font;
	TFNFlavoredRange* _showMoreTextRange;
	TFNAttributedTextModel* _textModel;
	NSString* _accessibilityLabel;
	CGSize _currentSize;

}

@property (nonatomic,retain) TFNAttributedTextModel * textModel;                       //@synthesize textModel=_textModel - In the implementation block
@property (assign,nonatomic) CGSize currentSize;                                       //@synthesize currentSize=_currentSize - In the implementation block
@property (nonatomic,copy) NSString * accessibilityLabel;                              //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
@property (nonatomic,readonly) float horizontalPadding; 
@property (nonatomic,copy,readonly) NSString * text;                                   //@synthesize text=_text - In the implementation block
@property (nonatomic,readonly) UIImage * accessoryImage;                               //@synthesize accessoryImage=_accessoryImage - In the implementation block
@property (nonatomic,readonly) UIFont * font;                                          //@synthesize font=_font - In the implementation block
@property (nonatomic,copy,readonly) TFNFlavoredRange * showMoreTextRange;              //@synthesize showMoreTextRange=_showMoreTextRange - In the implementation block
@property (nonatomic,readonly) char rendersShowMoreTextRangeAsLink; 
+(id)cellReuseIdentifier;
+(id)showMoreLinkColor;
+(id)showMoreLinkAttributes;
+(id)_generateAttributedStringForText:(id)arg1 linkRange:(id)arg2 accessoryImage:(id)arg3 font:(id)arg4 ;
+(id)textModelWithText:(id)arg1 linkRange:(id)arg2 accessoryImage:(id)arg3 font:(id)arg4 ;
+(char)_displayTextContainsDirectionMarks:(id)arg1 ;
+(Class)cellClass;
+(id)textColor;
-(TFNFlavoredRange *)showMoreTextRange;
-(char)rendersShowMoreTextRangeAsLink;
-(void)setCurrentSize:(CGSize)arg1 ;
-(TFNAttributedTextModel *)textModel;
-(void)setTextModel:(TFNAttributedTextModel *)arg1 ;
-(CGSize)currentSize;
-(UIImage *)accessoryImage;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(NSString *)accessibilityLabel;
-(UIFont *)font;
-(unsigned long long)accessibilityTraits;
-(char)isAccessibilityElement;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(float)horizontalPadding;
@end

