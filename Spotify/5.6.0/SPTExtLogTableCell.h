/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:33 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class NSString, UILabel, UIImage, UIImageView;

@interface SPTExtLogTableCell : UITableViewCell {

	NSString* _text;
	unsigned _severity;
	UILabel* _label;
	UIImage* _icon;
	UIImageView* _iconImageView;

}

@property (nonatomic,retain) NSString * text;                          //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) unsigned severity;                        //@synthesize severity=_severity - In the implementation block
@property (nonatomic,retain) UILabel * label;                          //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) UIImage * icon;                           //@synthesize icon=_icon - In the implementation block
@property (nonatomic,retain) UIImageView * iconImageView;              //@synthesize iconImageView=_iconImageView - In the implementation block
-(void)setSeverity:(unsigned)arg1 ;
-(unsigned)severity;
-(UIImageView *)iconImageView;
-(void)setIconImageView:(UIImageView *)arg1 ;
-(id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(UILabel *)label;
-(void)setLabel:(UILabel *)arg1 ;
-(void)setIcon:(UIImage *)arg1 ;
-(UIImage *)icon;
@end

