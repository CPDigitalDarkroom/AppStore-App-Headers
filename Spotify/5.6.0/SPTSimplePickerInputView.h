/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, May 18, 2016 at 11:45:37 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/D2238F36-ED84-40F4-9CB2-8C71CACC8B47/Spotify.app/Spotify
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Spotify/Spotify-Structs.h>
#import <Spotify/SPTPickerInputView.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>

@class NSArray, NSString;

@interface SPTSimplePickerInputView : SPTPickerInputView <UIPickerViewDataSource, UIPickerViewDelegate> {

	NSArray* _rows;

}

@property (nonatomic,copy) NSArray * rows;                          //@synthesize rows=_rows - In the implementation block
@property (assign,nonatomic) int selectedRowIndex; 
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelectedRowIndex:(int)arg1 ;
-(int)selectedRowIndex;
-(id)initWithFrame:(CGRect)arg1 ;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(NSArray *)rows;
-(id)picker;
-(void)setRows:(NSArray *)arg1 ;
@end

