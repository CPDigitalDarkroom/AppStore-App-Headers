/*
* This header is generated by classdump-dyld 1.0
* on Saturday, May 14, 2016 at 2:21:56 PM Eastern Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/B4BDDC65-4400-4BC5-A974-2245FB5B0846/MessengerCompressed-iphoneos-arm64,iphoneos-armv7.app/MessengerCompressed-iphoneos-arm64,iphoneos-armv7
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <libobjc.A.dylib/MFMailComposeViewControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>
#import <UIKit/UIPickerViewDataSource.h>
#import <UIKit/UIPickerViewDelegate.h>
#import <MessengerCompressed-iphoneos-arm64,iphoneos-armv7/FBSettingsVoipSettingsOverlayViewDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, MNUserSettings, UIPickerView, NSIndexPath, UITextField, FBSettingsVoipSettingsOverlayView, NSArray, NSString;

@interface FBWebRTCInternalSettingsViewController : UIViewController <UIAlertViewDelegate, MFMailComposeViewControllerDelegate, UIActionSheetDelegate, UIPickerViewDataSource, UIPickerViewDelegate, FBSettingsVoipSettingsOverlayViewDelegate, UITableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	MNUserSettings* _userSettings;
	UIPickerView* _picker;
	NSIndexPath* _selectedRowIndexPath;
	UITextField* _textField;
	FBSettingsVoipSettingsOverlayView* _overlayView;
	NSArray* _boolPickerDescriptions;
	NSArray* _descriptiveBoolPickerDescriptions;
	NSArray* _nsModePickerDescriptions;
	NSArray* _agcModePickerDescriptions;
	NSArray* _ecModePickerDescriptions;
	NSArray* _voipLoggingLevelNames;
	NSArray* _videoCodecOverrideNames;
	NSArray* _voipCodecOverrideNames;
	NSArray* _voipIsacOverrideRates;
	NSArray* _voipSpeexOverrideRates;
	NSArray* _voipOpusOverrideRates;
	NSArray* _voipIspxFecOverrideNames;
	NSArray* _voipIspxFecOverrideValues;
	NSArray* _voipIspxInitialCodecNames;
	NSArray* _voipIspxInitialCodecValues;
	NSArray* _voipOpispxInitialCodecNames;
	NSArray* _voipOpispxInitialCodecValues;
	NSArray* _voipSpeexFramesPerIspx;
	NSArray* _voipIsacFramesPerIspxNames;
	NSArray* _voipIsacFramesPerIspxValues;
	NSArray* _voipIspxMaxAggregationBweOffsetIsacNames;
	NSArray* _voipIspxMaxAggregationBweOffsetIsacValues;
	NSArray* _voipIspxAggregationStabilizationMsIsacNames;
	NSArray* _voipIspxAggregationStabilizationMsIsacValues;
	NSArray* _voipIsacInitialBitrateNames;
	NSArray* _voipIsacInitialBitrateValues;
	NSArray* _voipSpeexInitialBitrateNames;
	NSArray* _voipSpeexInitialBitrateValues;
	NSArray* _voipOneOnOneOverMultiwayOverrideNames;
	NSArray* _voipOneOnOneOverMultiwayOverrideValues;
	NSArray* _packetLossPercentageNames;
	NSArray* _packetLossPercentageValues;
	NSArray* _packetIntervalNames;
	NSArray* _packetIntervalValues;
	NSArray* _remoteVideoGracePeriodMsNames;
	NSArray* _remoteVideoGracePeriodMsValues;

}

@property (nonatomic,retain) MNUserSettings * userSettings;                                     //@synthesize userSettings=_userSettings - In the implementation block
@property (nonatomic,retain) UIPickerView * picker;                                             //@synthesize picker=_picker - In the implementation block
@property (nonatomic,retain) NSIndexPath * selectedRowIndexPath;                                //@synthesize selectedRowIndexPath=_selectedRowIndexPath - In the implementation block
@property (nonatomic,retain) UITextField * textField;                                           //@synthesize textField=_textField - In the implementation block
@property (nonatomic,retain) FBSettingsVoipSettingsOverlayView * overlayView;                   //@synthesize overlayView=_overlayView - In the implementation block
@property (nonatomic,copy) NSArray * boolPickerDescriptions;                                    //@synthesize boolPickerDescriptions=_boolPickerDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * descriptiveBoolPickerDescriptions;                         //@synthesize descriptiveBoolPickerDescriptions=_descriptiveBoolPickerDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * nsModePickerDescriptions;                                  //@synthesize nsModePickerDescriptions=_nsModePickerDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * agcModePickerDescriptions;                                 //@synthesize agcModePickerDescriptions=_agcModePickerDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * ecModePickerDescriptions;                                  //@synthesize ecModePickerDescriptions=_ecModePickerDescriptions - In the implementation block
@property (nonatomic,copy) NSArray * voipLoggingLevelNames;                                     //@synthesize voipLoggingLevelNames=_voipLoggingLevelNames - In the implementation block
@property (nonatomic,copy) NSArray * videoCodecOverrideNames;                                   //@synthesize videoCodecOverrideNames=_videoCodecOverrideNames - In the implementation block
@property (nonatomic,copy) NSArray * voipCodecOverrideNames;                                    //@synthesize voipCodecOverrideNames=_voipCodecOverrideNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIsacOverrideRates;                                     //@synthesize voipIsacOverrideRates=_voipIsacOverrideRates - In the implementation block
@property (nonatomic,copy) NSArray * voipSpeexOverrideRates;                                    //@synthesize voipSpeexOverrideRates=_voipSpeexOverrideRates - In the implementation block
@property (nonatomic,copy) NSArray * voipOpusOverrideRates;                                     //@synthesize voipOpusOverrideRates=_voipOpusOverrideRates - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxFecOverrideNames;                                  //@synthesize voipIspxFecOverrideNames=_voipIspxFecOverrideNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxFecOverrideValues;                                 //@synthesize voipIspxFecOverrideValues=_voipIspxFecOverrideValues - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxInitialCodecNames;                                 //@synthesize voipIspxInitialCodecNames=_voipIspxInitialCodecNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxInitialCodecValues;                                //@synthesize voipIspxInitialCodecValues=_voipIspxInitialCodecValues - In the implementation block
@property (nonatomic,copy) NSArray * voipOpispxInitialCodecNames;                               //@synthesize voipOpispxInitialCodecNames=_voipOpispxInitialCodecNames - In the implementation block
@property (nonatomic,copy) NSArray * voipOpispxInitialCodecValues;                              //@synthesize voipOpispxInitialCodecValues=_voipOpispxInitialCodecValues - In the implementation block
@property (nonatomic,copy) NSArray * voipSpeexFramesPerIspx;                                    //@synthesize voipSpeexFramesPerIspx=_voipSpeexFramesPerIspx - In the implementation block
@property (nonatomic,copy) NSArray * voipIsacFramesPerIspxNames;                                //@synthesize voipIsacFramesPerIspxNames=_voipIsacFramesPerIspxNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIsacFramesPerIspxValues;                               //@synthesize voipIsacFramesPerIspxValues=_voipIsacFramesPerIspxValues - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxMaxAggregationBweOffsetIsacNames;                  //@synthesize voipIspxMaxAggregationBweOffsetIsacNames=_voipIspxMaxAggregationBweOffsetIsacNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxMaxAggregationBweOffsetIsacValues;                 //@synthesize voipIspxMaxAggregationBweOffsetIsacValues=_voipIspxMaxAggregationBweOffsetIsacValues - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxAggregationStabilizationMsIsacNames;               //@synthesize voipIspxAggregationStabilizationMsIsacNames=_voipIspxAggregationStabilizationMsIsacNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIspxAggregationStabilizationMsIsacValues;              //@synthesize voipIspxAggregationStabilizationMsIsacValues=_voipIspxAggregationStabilizationMsIsacValues - In the implementation block
@property (nonatomic,copy) NSArray * voipIsacInitialBitrateNames;                               //@synthesize voipIsacInitialBitrateNames=_voipIsacInitialBitrateNames - In the implementation block
@property (nonatomic,copy) NSArray * voipIsacInitialBitrateValues;                              //@synthesize voipIsacInitialBitrateValues=_voipIsacInitialBitrateValues - In the implementation block
@property (nonatomic,copy) NSArray * voipSpeexInitialBitrateNames;                              //@synthesize voipSpeexInitialBitrateNames=_voipSpeexInitialBitrateNames - In the implementation block
@property (nonatomic,copy) NSArray * voipSpeexInitialBitrateValues;                             //@synthesize voipSpeexInitialBitrateValues=_voipSpeexInitialBitrateValues - In the implementation block
@property (nonatomic,copy) NSArray * voipOneOnOneOverMultiwayOverrideNames;                     //@synthesize voipOneOnOneOverMultiwayOverrideNames=_voipOneOnOneOverMultiwayOverrideNames - In the implementation block
@property (nonatomic,copy) NSArray * voipOneOnOneOverMultiwayOverrideValues;                    //@synthesize voipOneOnOneOverMultiwayOverrideValues=_voipOneOnOneOverMultiwayOverrideValues - In the implementation block
@property (nonatomic,copy) NSArray * packetLossPercentageNames;                                 //@synthesize packetLossPercentageNames=_packetLossPercentageNames - In the implementation block
@property (nonatomic,copy) NSArray * packetLossPercentageValues;                                //@synthesize packetLossPercentageValues=_packetLossPercentageValues - In the implementation block
@property (nonatomic,copy) NSArray * packetIntervalNames;                                       //@synthesize packetIntervalNames=_packetIntervalNames - In the implementation block
@property (nonatomic,copy) NSArray * packetIntervalValues;                                      //@synthesize packetIntervalValues=_packetIntervalValues - In the implementation block
@property (nonatomic,copy) NSArray * remoteVideoGracePeriodMsNames;                             //@synthesize remoteVideoGracePeriodMsNames=_remoteVideoGracePeriodMsNames - In the implementation block
@property (nonatomic,copy) NSArray * remoteVideoGracePeriodMsValues;                            //@synthesize remoteVideoGracePeriodMsValues=_remoteVideoGracePeriodMsValues - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithUserSettings:(id)arg1 ;
-(void)setUserSettings:(MNUserSettings *)arg1 ;
-(void)settingsOverlayViewWasTapped:(id)arg1 ;
-(void)setBoolPickerDescriptions:(NSArray *)arg1 ;
-(void)setDescriptiveBoolPickerDescriptions:(NSArray *)arg1 ;
-(void)setNsModePickerDescriptions:(NSArray *)arg1 ;
-(void)setAgcModePickerDescriptions:(NSArray *)arg1 ;
-(void)setEcModePickerDescriptions:(NSArray *)arg1 ;
-(void)setVoipLoggingLevelNames:(NSArray *)arg1 ;
-(void)setVideoCodecOverrideNames:(NSArray *)arg1 ;
-(void)setVoipCodecOverrideNames:(NSArray *)arg1 ;
-(void)setVoipIsacOverrideRates:(NSArray *)arg1 ;
-(void)setVoipSpeexOverrideRates:(NSArray *)arg1 ;
-(void)setVoipOpusOverrideRates:(NSArray *)arg1 ;
-(void)setVoipIspxFecOverrideNames:(NSArray *)arg1 ;
-(void)setVoipIspxFecOverrideValues:(NSArray *)arg1 ;
-(void)setVoipIspxInitialCodecNames:(NSArray *)arg1 ;
-(void)setVoipIspxInitialCodecValues:(NSArray *)arg1 ;
-(void)setVoipOpispxInitialCodecNames:(NSArray *)arg1 ;
-(void)setVoipOpispxInitialCodecValues:(NSArray *)arg1 ;
-(void)setVoipSpeexFramesPerIspx:(NSArray *)arg1 ;
-(void)setVoipIsacFramesPerIspxNames:(NSArray *)arg1 ;
-(void)setVoipIsacFramesPerIspxValues:(NSArray *)arg1 ;
-(void)setVoipIspxMaxAggregationBweOffsetIsacNames:(NSArray *)arg1 ;
-(void)setVoipIspxMaxAggregationBweOffsetIsacValues:(NSArray *)arg1 ;
-(void)setVoipIspxAggregationStabilizationMsIsacNames:(NSArray *)arg1 ;
-(void)setVoipIspxAggregationStabilizationMsIsacValues:(NSArray *)arg1 ;
-(void)setVoipIsacInitialBitrateNames:(NSArray *)arg1 ;
-(void)setVoipIsacInitialBitrateValues:(NSArray *)arg1 ;
-(void)setVoipSpeexInitialBitrateNames:(NSArray *)arg1 ;
-(void)setVoipSpeexInitialBitrateValues:(NSArray *)arg1 ;
-(void)setPacketLossPercentageNames:(NSArray *)arg1 ;
-(void)setPacketLossPercentageValues:(NSArray *)arg1 ;
-(void)setPacketIntervalNames:(NSArray *)arg1 ;
-(void)setPacketIntervalValues:(NSArray *)arg1 ;
-(void)setRemoteVideoGracePeriodMsNames:(NSArray *)arg1 ;
-(void)setRemoteVideoGracePeriodMsValues:(NSArray *)arg1 ;
-(void)setVoipOneOnOneOverMultiwayOverrideNames:(NSArray *)arg1 ;
-(void)setVoipOneOnOneOverMultiwayOverrideValues:(NSArray *)arg1 ;
-(void)_userDidSwitchAutomatedTestSupport:(id)arg1 ;
-(void)_userDidSwitchPreprocessFrames:(id)arg1 ;
-(void)_userDidSwitchRecordRemoteVideo:(id)arg1 ;
-(void)_userDidSwitchRecordRemoteRawVideo:(id)arg1 ;
-(void)_userDidSwitchStarveSmoothing:(id)arg1 ;
-(void)_userDidSwitchRecordSelfVideo:(id)arg1 ;
-(void)_userDidSwitchRecordSelfRawVideo:(id)arg1 ;
-(void)_userDidSwitchLoadSelfRawVideo:(id)arg1 ;
-(void)_userDidSwitchLoopVideoPlayback:(id)arg1 ;
-(id)detailTextLabelForValue:(int)arg1 ;
-(id)_rateToName:(int)arg1 ;
-(void)_userDidIspxSwitchCodecSwitchEnabled:(id)arg1 ;
-(void)userDidSwitchVideoHeight:(int)arg1 ;
-(void)userDidSwitchVideoWidth:(int)arg1 ;
-(void)_copyLog;
-(void)_mailAudioFiles;
-(void)_deletePCMFiles;
-(void)_showActionsheet:(id)arg1 fromCellAtIndexPath:(id)arg2 ;
-(void)_make_selection_box:(id)arg1 tag:(int)arg2 index:(id)arg3 ;
-(void)setSelectedRowIndexPath:(NSIndexPath *)arg1 ;
-(void)_showPickerWhenSelectingIndexPath:(id)arg1 ;
-(void)userDidSwitchLoggingLevel:(unsigned)arg1 ;
-(void)userDidSwitchVideoCodecMode:(unsigned)arg1 ;
-(void)userDidSwitchCodecMode:(unsigned)arg1 ;
-(void)userDidSwitchCodecRate:(int)arg1 ;
-(void)userDidSwitchIspxFecMode:(int)arg1 ;
-(void)userDidSwitchIspxInitialCodec:(int)arg1 ;
-(void)userDidSwitchOpispxInitialCodec:(int)arg1 ;
-(void)userDidSwitchSpeexFramesPerPacketIspx:(int)arg1 ;
-(void)userDidSwitchIsacFramesPerPacketIspx:(int)arg1 ;
-(void)userDidSwitchIspxMaxAggregationBweOffsetIsac:(int)arg1 ;
-(void)userDidSwitchIspxAggregationStabilizationMsIsac:(int)arg1 ;
-(void)userDidSwitchIsacInitialBitrate:(int)arg1 ;
-(void)userDidSwitchSpeexInitialBitrate:(int)arg1 ;
-(void)userDidSwitchOneOnOneOverMultiwayOverride:(int)arg1 ;
-(NSIndexPath *)selectedRowIndexPath;
-(NSArray *)boolPickerDescriptions;
-(NSArray *)descriptiveBoolPickerDescriptions;
-(NSArray *)nsModePickerDescriptions;
-(NSArray *)agcModePickerDescriptions;
-(NSArray *)ecModePickerDescriptions;
-(NSArray *)voipLoggingLevelNames;
-(NSArray *)videoCodecOverrideNames;
-(NSArray *)voipCodecOverrideNames;
-(NSArray *)voipIsacOverrideRates;
-(NSArray *)voipSpeexOverrideRates;
-(NSArray *)voipOpusOverrideRates;
-(NSArray *)voipIspxFecOverrideNames;
-(NSArray *)voipIspxFecOverrideValues;
-(NSArray *)voipIspxInitialCodecNames;
-(NSArray *)voipIspxInitialCodecValues;
-(NSArray *)voipOpispxInitialCodecNames;
-(NSArray *)voipOpispxInitialCodecValues;
-(NSArray *)voipSpeexFramesPerIspx;
-(NSArray *)voipIsacFramesPerIspxNames;
-(NSArray *)voipIsacFramesPerIspxValues;
-(NSArray *)voipIspxMaxAggregationBweOffsetIsacNames;
-(NSArray *)voipIspxMaxAggregationBweOffsetIsacValues;
-(NSArray *)voipIspxAggregationStabilizationMsIsacNames;
-(NSArray *)voipIspxAggregationStabilizationMsIsacValues;
-(NSArray *)voipIsacInitialBitrateNames;
-(NSArray *)voipIsacInitialBitrateValues;
-(NSArray *)voipSpeexInitialBitrateNames;
-(NSArray *)voipSpeexInitialBitrateValues;
-(NSArray *)voipOneOnOneOverMultiwayOverrideNames;
-(NSArray *)voipOneOnOneOverMultiwayOverrideValues;
-(NSArray *)packetLossPercentageNames;
-(NSArray *)packetLossPercentageValues;
-(NSArray *)packetIntervalNames;
-(NSArray *)packetIntervalValues;
-(NSArray *)remoteVideoGracePeriodMsNames;
-(NSArray *)remoteVideoGracePeriodMsValues;
-(void)dealloc;
-(int)numberOfComponentsInPickerView:(id)arg1 ;
-(int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2 ;
-(id)pickerView:(id)arg1 titleForRow:(int)arg2 forComponent:(int)arg3 ;
-(void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)loadView;
-(void)viewWillAppear:(char)arg1 ;
-(void)viewDidAppear:(char)arg1 ;
-(UITextField *)textField;
-(UIPickerView *)picker;
-(void)setPicker:(UIPickerView *)arg1 ;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)mailComposeController:(id)arg1 didFinishWithResult:(int)arg2 error:(id)arg3 ;
-(void)setTextField:(UITextField *)arg1 ;
-(void)_dismissPicker;
-(MNUserSettings *)userSettings;
-(void)setOverlayView:(FBSettingsVoipSettingsOverlayView *)arg1 ;
-(FBSettingsVoipSettingsOverlayView *)overlayView;
@end

