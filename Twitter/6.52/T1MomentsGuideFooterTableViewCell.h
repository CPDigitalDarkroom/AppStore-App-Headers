/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 9:31:25 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/8A9DE0F0-8C0D-4043-A8B5-545C839396E1/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Twitter/Twitter-Structs.h>
#import <TFNUI/TFNTableViewCell.h>
#import <Twitter/TFNSizeThatFitsHelperDelegate.h>

@class UIImageView, TFNAttributedTextView, TFNSizeThatFitsHelper, NSString;

@interface T1MomentsGuideFooterTableViewCell : TFNTableViewCell <TFNSizeThatFitsHelperDelegate> {

	UIImageView* _iconView;
	TFNAttributedTextView* _messageAttributedTextView;
	TFNSizeThatFitsHelper* _layoutHelper;

}

@property (nonatomic,retain) UIImageView * iconView;                                         //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) TFNAttributedTextView * messageAttributedTextView;              //@synthesize messageAttributedTextView=_messageAttributedTextView - In the implementation block
@property (nonatomic,retain) TFNSizeThatFitsHelper * layoutHelper;                           //@synthesize layoutHelper=_layoutHelper - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_attributedFooterMessageTextModel;
+(float)_estimatedHeightForLayoutMetrics:(id)arg1 ;
-(TFNSizeThatFitsHelper *)layoutHelper;
-(TFNAttributedTextView *)messageAttributedTextView;
-(void)setMessageAttributedTextView:(TFNAttributedTextView *)arg1 ;
-(void)setLayoutHelper:(TFNSizeThatFitsHelper *)arg1 ;
-(void)sizeThatFitsHelper:(id)arg1 layoutSubviewsForView:(id)arg2 atWidth:(float)arg3 ;
-(void)layoutSubviews;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
@end

