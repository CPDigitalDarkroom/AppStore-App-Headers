/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:18 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <UIKit/UIView.h>

@class NSString, TFNAttributedTextView;

@interface T1NativePollingCardTitleSubtitleView : UIView {

	NSString* _title;
	NSString* _subtitle;
	TFNAttributedTextView* _titleTextView;
	TFNAttributedTextView* _subtitleTextView;

}

@property (nonatomic,retain) TFNAttributedTextView * titleTextView;                 //@synthesize titleTextView=_titleTextView - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * subtitleTextView;              //@synthesize subtitleTextView=_subtitleTextView - In the implementation block
@property (nonatomic,retain) NSString * title;                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * subtitle;                                   //@synthesize subtitle=_subtitle - In the implementation block
+(CGSize)_sizeForTitle:(id)arg1 width:(float)arg2 ;
+(CGSize)_sizeForSubtitle:(id)arg1 width:(float)arg2 ;
+(id)_textModelForTitle;
+(id)_attributedStringForTitle:(id)arg1 ;
+(id)_textModelForSubtitle;
+(id)_attributedStringForSubtitle:(id)arg1 ;
+(CGSize)_sizeForTextModel:(id)arg1 width:(float)arg2 ;
+(id)_textModelWithMaxLines:(unsigned)arg1 ;
+(id)_attributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3 ;
+(CGSize)sizeForTitle:(id)arg1 subtitle:(id)arg2 width:(float)arg3 ;
-(TFNAttributedTextView *)titleTextView;
-(TFNAttributedTextView *)subtitleTextView;
-(void)setTitleTextView:(TFNAttributedTextView *)arg1 ;
-(void)setSubtitleTextView:(TFNAttributedTextView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(NSString *)subtitle;
-(void)setSubtitle:(NSString *)arg1 ;
@end

